
        
              def monotonic_subscribe(pattern = nil, callback = nil, &block)
        notifier.subscribe(pattern, callback, monotonic: true, &block)
      end
    
        DATA_URL = 'data:'.freeze
    
        alias_method :insert_before, :insert
    
        def process_response?(response)
      raise NotImplementedError
    end
    
          before do
        allow_any_instance_of(Vagrant::Errors::VagrantError).
          to receive(:translate_error)
        allow(machine.ui).to receive(:error)
      end
    
    
  describe '#rsync_command' do
    it 'returns the rsync command' do
      expect( subject.rsync_command(machine) ).to eq('sudo rsync')
    end
  end
    
      subject { described_class.new(machine) }
    
        let(:box_output_path) { File.join(scratch, 'package.box') }
    
    require Vagrant.source_root.join('plugins/provisioners/chef/cap/omnios/chef_installed')
    
      before do
    allow(machine).to receive(:communicate).and_return(communicator)
  end
    
          # Add the sub-machine configuration to the loader and keys
      vm_config_key = '#{object_id}_machine_#{name}'
      @loader.set(vm_config_key, sub_machine.config_procs)
      keys << vm_config_key
    
    require_relative '../config/bundler_helper'
require 'etc'
    
          def delete_authorization_session_variables
        session.delete(:client_id)
        session.delete(:response_type)
        session.delete(:redirect_uri)
        session.delete(:scopes)
        session.delete(:state)
        session.delete(:nonce)
      end
    
          def validation_fail_as_json(e)
        render json: {error: :invalid_client_metadata, error_description: e.message}, status: 400
      end
    
          def fetch_public_key(o_auth_app, jwt)
        public_key = fetch_public_key_from_json(o_auth_app.jwks, jwt)
        if public_key.empty? && o_auth_app.jwks_uri
          response = Faraday.get(o_auth_app.jwks_uri)
          public_key = fetch_public_key_from_json(response.body, jwt)
        end
        raise Rack::OAuth2::Server::Authorize::BadRequest(:unauthorized_client) if public_key.empty?
        public_key
      end
    
    class MessagesController < ApplicationController
  before_action :authenticate_user!