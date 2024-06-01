from sqlalchemy import CheckConstraint
from . import db

class Client(db.Model):
    __tablename__ = 'clients'
    id = db.Column(db.Integer, primary_key=True)
    fullname = db.Column(db.String(100), nullable=False)
    phonenumber = db.Column(db.String(20), nullable=False)
    hashpassword = db.Column(db.String, nullable=False)
    is_admin = db.Column(db.Boolean, nullable=False)
    orders = db.relationship('Order', back_populates='client')

class Coach(db.Model):
    __tablename__ = 'coachs'
    id = db.Column(db.Integer, primary_key=True)
    fullname = db.Column(db.String(100), nullable=False)
    phonenumber = db.Column(db.String(20), nullable=False)
    rating = db.Column(db.Numeric(2, 1), nullable=True)
    __table_args__ = (
        CheckConstraint('rating >= 0 AND rating <= 5', name='check_rating'),
    )
    reviews = db.relationship('Review', back_populates='coach')
    orders = db.relationship('Order', back_populates='coach')

class Service(db.Model):
    __tablename__ = 'services'
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(100), nullable=False)
    price = db.Column(db.Numeric(10, 2), nullable=False)
    description = db.Column(db.Text, nullable=True)

class Review(db.Model):
    __tablename__ = 'reviews'
    id = db.Column(db.Integer, primary_key=True)
    coach_id = db.Column(db.Integer, db.ForeignKey('coachs.id'), nullable=False)
    reviews = db.Column(db.Text, nullable=True)
    rate = db.Column(db.Integer, nullable=True)
    __table_args__ = (
        CheckConstraint('rate >= 0 AND rate <= 10', name='check_rate'),
    )
    coach = db.relationship('Coach', back_populates='reviews')

class Order(db.Model):
    __tablename__ = 'orders'
    id = db.Column(db.Integer, primary_key=True)
    client_id = db.Column(db.Integer, db.ForeignKey('clients.id'), nullable=False)
    coach_id = db.Column(db.Integer, db.ForeignKey('coachs.id'), nullable=False)
    status = db.Column(db.String(50), nullable=False)
    client = db.relationship('Client', back_populates='orders')
    coach = db.relationship('Coach', back_populates='orders')
    seasontickets = db.relationship('SeasonTicket', back_populates='order')

class OrderService(db.Model):
    __tablename__ = 'order_services'
    order_id = db.Column(db.Integer, db.ForeignKey('orders.id'), primary_key=True)
    service_id = db.Column(db.Integer, db.ForeignKey('services.id'), primary_key=True)

class SeasonTicket(db.Model):
    __tablename__ = 'seasontickets'
    id = db.Column(db.Integer, primary_key=True)
    order_id = db.Column(db.Integer, db.ForeignKey('orders.id'), nullable=False)
    price = db.Column(db.Numeric(10, 2), nullable=False)
    date = db.Column(db.Date, nullable=False)
    status = db.Column(db.String(50), nullable=False)
    order = db.relationship('Order', back_populates='seasontickets')
