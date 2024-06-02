from flask import Blueprint, request, jsonify
from .models import Client, Coach, Service, Review, Order, OrderService, SeasonTicket
from . import db

api_bp = Blueprint('api', __name__)

@api_bp.route('/clients', methods=['GET'])
def get_clients():
    clients = Client.query.all()
    result = [{'id': c.id, 'fullname': c.fullname, 'phonenumber': c.phonenumber, 'is_admin': c.is_admin} for c in clients]
    return jsonify(result), 200

@api_bp.route('/clients', methods=['POST'])
def add_client():
    data = request.get_json()
    new_client = Client(fullname=data['fullname'], phonenumber=data['phonenumber'], hashpassword=data['hashpassword'], is_admin=data['is_admin'])
    db.session.add(new_client)
    db.session.commit()
    return jsonify({'message': 'New client added!'}), 201
