# Используем образ Python
FROM python:3.9-slim

# Устанавливаем рабочую директорию
WORKDIR /app

# Копируем файлы requirements.txt и устанавливаем зависимости
COPY requirements.txt requirements.txt
RUN pip install --no-cache-dir -r requirements.txt

# Копируем все файлы проекта
COPY . .

# Открываем порт 8080
EXPOSE 8080

# Команда для запуска приложения
CMD ["flask", "run", "--host=0.0.0.0", "--port=8080"]
