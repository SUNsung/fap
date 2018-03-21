
        
            if resource.errors.empty?
      set_flash_message!(:notice, :confirmed)
      respond_with_navigational(resource){ redirect_to after_confirmation_path_for(resource_name, resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
    Devise.setup do |config|
  require 'devise/orm/active_record'
  config.secret_key = 'secret_key_base'
end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
            routes.each do |module_name, actions|
          [:path, :url].each do |path_or_url|
            actions.each do |action|
              action = action ? '#{action}_' : ''
              method = :'#{action}#{module_name}_#{path_or_url}'
    
          def convert_key(key)
        key.is_a?(Symbol) ? key.to_s : key
      end
    end
  end
end

    
      def test_strtime
    t = nil
    assert_nothing_raised { t = Time.utc('2000', '1', '2' , '3', '4', '5') }
    assert_equal(Time.utc(2000,1,2,3,4,5), t)
  end
    
      it 'adds nil for each element requested beyond the end of the String' do
    [ ['abcdefg',  [nil, nil, nil]],
      ['?\xf6\xb8Q\xeb\x85\x1e\xb8abc', [1.42, nil, nil]],
      ['@\x07333333?\xf6ffffffabcd',    [2.9, 1.4, nil]]
    ].should be_computed_by(:unpack, unpack_format(3))
  end
    
      class Status
    attr_reader :thread, :inspect, :status
    def initialize(thread)
      @thread = thread
      @alive = thread.alive?
      @inspect = thread.inspect
      @status = thread.status
      @stop = thread.stop?
    end
    
        it 'propagates inner exception to Thread.join if there is an outer ensure clause' do
      thread = ThreadSpecs.dying_thread_with_outer_ensure(@method) { }
      lambda { thread.join }.should raise_error(RuntimeError, 'In dying thread')
    end
    
      path = 'assets/stylesheets'
  css_path = args.with_defaults(css_path: 'tmp')[:css_path]
  puts Term::ANSIColor.bold 'Compiling SCSS in #{path}'
  Dir.mkdir(css_path) unless File.directory?(css_path)
  %w(_bootstrap bootstrap/_theme).each do |file|
    save_path = '#{css_path}/#{file.sub(/(^|\/)?_+/, '\1').sub('/', '-')}.css'
    puts Term::ANSIColor.cyan('  #{save_path}') + '...'
    engine    = Sass::Engine.for_file('#{path}/#{file}.scss', syntax: :scss, load_paths: [path])
    css       = engine.render
    File.open(save_path, 'w') { |f| f.write css }
  end
end
    
            def autocorrect(node)
          redundant_regex?(node) do |receiver, regex_str|
            receiver, regex_str = regex_str, receiver if receiver.is_a?(String)
            regex_str = regex_str[0..-3] # drop \Z anchor
            regex_str = interpret_string_escapes(regex_str)
    
            def autocorrect(node)
          # Regexp#match can take a second argument, but this cop doesn't
          # register an offense in that case
          return unless node.first_argument.regexp_type?
    
                  add_offense(condition)
            end
    
            def_node_matcher :multiple_compare?, <<-PATTERN
          (send (send _ {:< :> :<= :>=} $_) {:< :> :<= :>=} _)
        PATTERN
    
            def variables_in_node(node)
          if node.or_type?
            node.node_parts
                .flat_map { |node_part| variables_in_node(node_part) }
                .uniq
          else
            variables_in_simple_node(node)
          end
        end