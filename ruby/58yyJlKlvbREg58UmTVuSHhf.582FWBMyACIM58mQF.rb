
        
            def build_for_type(type, user, attributes = {})
      attributes.delete(:type)
    
          if options[:roles].is_a?(Symbol)
        options[:roles] = [options[:roles]]
      end
    
        def setup!(scheduler, mutex)
      @scheduler = scheduler
      @mutex = mutex
      setup if respond_to?(:setup)
    end
    
        def id_at(timestamp)
      id  = timestamp.to_i * 1000 + rand(1000)
      id  = id << 16
      id += rand(2**16)
      id
    end
    
          it 'processes payload with actor if valid signature exists' do
        payload['signature'] = {'type' => 'RsaSignature2017'}
    
    describe Settings::NotificationsController do
  render_views
    
            def_node_matcher :redundant_regex?, <<-PATTERN
          {(send $!nil? {:match :=~} (regexp (str $#literal_at_start?) (regopt)))
           (send (regexp (str $#literal_at_start?) (regopt)) {:match :=~} $_)}
        PATTERN
    
            private