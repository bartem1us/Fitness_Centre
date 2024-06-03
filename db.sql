-- �������� ������� ��������
CREATE TABLE clients (
    id SERIAL PRIMARY KEY,
    fullname VARCHAR(100) NOT NULL,
    phonenumber VARCHAR(20) NOT NULL,
    hashpassword VARCHAR NOT NULL,
    is_admin BOOLEAN NOT NULL
);

-- �������� ������� ��������
CREATE TABLE coachs (
    id SERIAL PRIMARY KEY,
    fullname VARCHAR(100) NOT NULL,
    phonenumber VARCHAR(20) NOT NULL,
    rating NUMERIC(2, 1) CHECK (rating >= 0 AND rating <= 5)
);

-- �������� ������� �����
CREATE TABLE services (
    id SERIAL PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    price NUMERIC(10, 2) NOT NULL,
    description TEXT
);

-- �������� ������� �������
CREATE TABLE reviews (
    id SERIAL PRIMARY KEY,
    coach_id INTEGER NOT NULL,
    reviews TEXT,
    rate INTEGER CHECK (rate >= 0 AND rate <= 10),
    FOREIGN KEY (coach_id) REFERENCES coachs(id) ON DELETE CASCADE
);

-- �������� ������� �������
CREATE TABLE orders (
    id SERIAL PRIMARY KEY,
    client_id INTEGER NOT NULL,
    coach_id INTEGER NOT NULL,
    status VARCHAR(50) NOT NULL,
    FOREIGN KEY (client_id) REFERENCES clients(id) ON DELETE CASCADE,
    FOREIGN KEY (coach_id) REFERENCES coachs(id) ON DELETE CASCADE
);

-- �������� ��������������� ������� ��� ����� "�����-��-������" ����� �������� � ��������
CREATE TABLE order_services (
    order_id INTEGER NOT NULL,
    service_id INTEGER NOT NULL,
    PRIMARY KEY (order_id, service_id),
    FOREIGN KEY (order_id) REFERENCES orders(id) ON DELETE CASCADE,
    FOREIGN KEY (service_id) REFERENCES services(id) ON DELETE CASCADE
);

-- �������� ������� �����������
CREATE TABLE seasontickets (
    id SERIAL PRIMARY KEY,
    order_id INTEGER NOT NULL,
    price NUMERIC(10, 2) NOT NULL,
    date DATE NOT NULL,
    status VARCHAR(50) NOT NULL,
    FOREIGN KEY (order_id) REFERENCES orders(id) ON DELETE CASCADE
);