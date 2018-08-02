
        
                    Thread.pass while @thread.alive?
          end
    
            attributes.flat_map do |key, value|
          if value.is_a?(Hash) && !table.has_column?(key)
            associated_predicate_builder(key).expand_from_hash(value)
          elsif table.associated_with?(key)
            # Find the foreign key when using queries such as:
            # Post.where(author: author)
            #
            # For polymorphic relationships, find the foreign key and type:
            # PriceEstimate.where(estimate_of: treasure)
            associated_table = table.associated_table(key)
            if associated_table.polymorphic_association?
              case value.is_a?(Array) ? value.first : value
              when Base, Relation
                value = [value] unless value.is_a?(Array)
                klass = PolymorphicArrayValue
              end
            end
    
        # This isn't strictly necessary for the test, but a little bit of
    # knowledge of internals allows us to make failures far more likely.
    model.define_singleton_method(:define_attribute) do |*args|
      Thread.pass
      super(*args)
    end
    
        def speak(data)
      @last_action = [ :speak, data ]
    end
    
      test 'disallow block and arg together' do
    e = assert_raise ArgumentError do
      ChatChannel.periodically(:send_updates, every: 1) { ping }
    end
    assert_match(/not both/, e.message)
  end
    
          expected = { 'identifier' => '{id: 1}', 'type' => 'reject_subscription' }
      assert_equal expected, @connection.last_transmission
    end
    
            Connection.new(@server, env).tap do |connection|
          connection.process
          assert_predicate connection.websocket, :possible?
    
        def close
      sleep WAIT_WHEN_NOT_EXPECTING_EVENT
    
            assert_equal 'action_cable/User#lifo', pubsub_call[:channel]
        assert_instance_of Proc, pubsub_call[:callback]
      end
    end
  end
    
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
    
      def evernote_client
    EvernoteOAuth::Client.new(
      token:           evernote_oauth_token,
      consumer_key:    evernote_consumer_key,
      consumer_secret: evernote_consumer_secret,
      sandbox:         use_sandbox?
    )
  end
    
      before_action :upgrade_warning, only: :index