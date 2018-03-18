
        
            puts 'GC Stats:'
    GC.start(full_mark: true, immediate_sweep: false)
    puts JSON.pretty_generate(GC.stat)
  end
end
    
          #
      # Require a gem or file if it's present, otherwise silently fail.
      #
      # names - a string gem name or array of gem names
      #
      def require_if_present(names)
        Array(names).each do |name|
          begin
            require name
          rescue LoadError
            Jekyll.logger.debug 'Couldn't load #{name}. Skipping.'
            yield(name, version_constraint(name)) if block_given?
            false
          end
        end
      end
    
          def render!(*args)
        measure_time do
          measure_bytes do
            @template.render!(*args)
          end
        end
      end
    
          def cookie_paths(path)
        path = '/' if path.to_s.empty?
        paths = []
        Pathname.new(path).descend { |p| paths << p.to_s }
        paths
      end
    
        it 'leaves TempFiles untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['file'][:filename] + '\n' + \
                                                 request.params['file'][:tempfile].read + '\n' + \
                                                 request.params['other']]]
      end
    
      it 'should set the X-XSS-Protection' do
    expect(get('/', {}, 'wants' => 'text/html;charset=utf-8').headers['X-XSS-Protection']).to eq('1; mode=block')
  end