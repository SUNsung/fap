
        
              def initialize
        @log_tags = []
    
        def connect
      reject_unauthorized_connection
    end
    
          # Setup the connection
      connection.send :handle_open
      assert connection.connected
    
    class ActionCable::Connection::ClientSocketTest < ActionCable::TestCase
  class Connection < ActionCable::Connection::Base
    attr_reader :connected, :websocket, :errors
    
            # Internal hax = :(
        client = connection.websocket.send(:websocket)
        rack_hijack_io = client.instance_variable_get('@stream').instance_variable_get('@rack_hijack_io')
        rack_hijack_io.stub(:write, proc { raise(closed_exception, 'foo') }) do
          assert_called(client, :client_gone) do
            client.write('boo')
          end
        end
        assert_equal [], connection.errors
      end
    end
  end
    
    puts 'Validating #{links.size} links...'
    
        options[:skip_patterns] = [/mysqlnd/, /xdevapi/i]
    
        def to_json
      JSON.generate(as_json)
    end
    
    module Docs
  class PageDb
    attr_reader :pages
    
              # Verify the box exists that we want to repackage
          box = @env.boxes.find(box_name, box_provider, '= #{box_version}')
          if !box
            raise Vagrant::Errors::BoxNotFoundWithProviderAndVersion,
              name: box_name,
              provider: box_provider.to_s,
              version: box_version
          end
    
            def update
          authorize! :update, @order, order_token
          @address = find_address