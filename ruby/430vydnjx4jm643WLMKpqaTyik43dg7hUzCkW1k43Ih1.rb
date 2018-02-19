
        
        config = File.expand_path '../lib/jekyll/mime.types', __dir__
    
        def base_directory
      @base_directory.to_s
    end
    
          # Group an array of items by an expression
      #
      # input - the object array
      # variable - the variable to assign each item to in the expression
      # expression -a Liquid comparison expression passed in as a string
      #
      # Returns the filtered array of objects
      def group_by_exp(input, variable, expression)
        return input unless groupable?(input)
    
          topic.feature_topic_users(args)
    end
    
      def grant_admin!
    set_permission('admin', true)
  end
    
          when :login_fail
    
            when :err
          case s[:last]
            when :pass
              # Oops got a -ERR after a pass so its crap ignore the pass
              # But report it, might be helpfull for guessing :-)
    
    		# Reset the block size
		self.block_size = 0
    
        set :run, Proc.new { File.expand_path($0) == File.expand_path(app_file) }
    
          def remove_bad_cookies(request, response)
        return if bad_cookies.empty?
        paths = cookie_paths(request.path)
        bad_cookies.each do |name|
          paths.each { |path| response.set_cookie name, empty_cookie(request.host, path) }
        end
      end
    
        it 'copes with nested arrays' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']['bar']]]
      end
      get '/', :foo => {:bar => '<bar>'}
      expect(body).to eq('&lt;bar&gt;')
    end
    
      %w(GET HEAD).each do |method|
    it 'accepts #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).to be_ok
    end
  end
    
      context 'escaping' do
    before do
      mock_app { |e| [200, {'Content-Type' => 'text/plain'}, [e['PATH_INFO']]] }
    end
    
        def define_class_getter
      @klass.extend(ClassMethods)
    end
    
            def failure_message
          'Should have an attachment named #{@attachment_name}'
        end
    
            def multiple_assignment_node
          grandparent_node = node.parent ? node.parent.parent : nil
          return nil unless grandparent_node
          return nil unless grandparent_node.type == MULTIPLE_ASSIGNMENT_TYPE
          return nil unless node.parent.type == MULTIPLE_LEFT_HAND_SIDE_TYPE
          grandparent_node
        end
      end
    end
  end
end

    
              @assignments.reverse_each do |assignment|
            next if consumed_branches.include?(assignment.branch)
    
            def autocorrect(node)
          redundant_regex?(node) do |receiver, regex_str|
            receiver, regex_str = regex_str, receiver if receiver.is_a?(String)
            regex_str = regex_str[2..-1] # drop \A anchor
            regex_str = interpret_string_escapes(regex_str)
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for optional arguments to methods
      # that do not come at the end of the argument list
      #
      # @example
      #   # bad
      #   def foo(a = 1, b, c)
      #   end
      #
      #   # good
      #   def baz(a, b, c = 1)
      #   end
      #
      #   def foobar(a = 1, b = 2, c = 3)
      #   end
      class OptionalArguments < Cop
        MSG = 'Optional arguments should appear at the end ' \
              'of the argument list.'.freeze
    
      def human?
    params.has_key?('human') && (params['human'].nil? || as_boolean(params['human']) == true)
  end
end

    
              def plugins
            @plugins ||= find_plugins_gem_specs.map do |spec|
              { :name => spec.name, :version => spec.version.to_s }
            end.sort_by do |spec|
              spec[:name]
            end
          end
    
          def extract_metrics(path, *keys)
        snapshot.metric_store.extract_metrics(path, *keys)
      end
    end
  end
end

    
          expect('.all-buttons-active').to have_ruleset(ruleset)
    end
  end
    
      context 'called with one size' do
    it 'applies same width to all sides' do
      rule = 'margin: 1px'
    
          expect('.prefix--moz-ms').to have_ruleset(rule)
    end
  end
end

    
      context 'called with two sizes' do
    it 'applies to height and width' do
      rule = 'height: 2em; width: 1em;'