
        
          describe '#relative_distance_of_time_in_words' do
    it 'in the past' do
      expect(relative_distance_of_time_in_words(Time.now-5.minutes)).to eq('5m ago')
    end
    
        it 'does not output links to other agents outside of the incoming set' do
      Link.create!(:source_id => agents(:jane_weather_agent).id, :receiver_id => agents(:jane_website_agent).id)
      Link.create!(:source_id => agents(:jane_website_agent).id, :receiver_id => agents(:jane_rain_notifier_agent).id)
    
        it 'returns nil when the path cannot be followed' do
      expect(Utils.value_at({ :foo => { :bar => :baz }}, 'foo.bing')).to be_nil
    end
  end
    
        def byte_to_str_pos(pos)
      @s.string.byteslice(0, pos).length
    end
    
          less = less.gsub(mixin_pattern) do |_|
        scope, name, args = $1, $2, $3
        scope = scope.scan(/[\w-]+/).join('-') + '-' unless scope.empty?
        args = '(#{args.tr(';', ',')})' unless args.empty?
        if name && mixin_names.include?('#{scope}#{name}')
          '@include #{scope}#{name}#{args}'
        else
          '@extend .#{scope}#{name}'
        end
      end
    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false