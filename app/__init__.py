from flask import Flask
from flask_sqlalchemy import SQLAlchemy
from flask_jwt_extended import JWTManager
from .config import Config

db = SQLAlchemy()
jwt = JWTManager()

def create_app():
    app = Flask(__name__)
    app.config.from_object(Config)

    db.init_app(app)
    jwt.init_app(app)

    with app.app_context():
        from . import routes
        app.register_blueprint(routes.api_bp, url_prefix='/api')
        db.create_all()  # Инициализация базы данных

    return app

app = create_app()
