
        
                      yield item, value, text, default_html_options.merge(additional_html_options)
            end.join.html_safe
          end
    
              content_is_options = content_or_options.is_a?(Hash)
          if content_is_options
            options.merge! content_or_options
            @content = nil
          else
            @content = content_or_options
          end
    
            # If no layout is supplied, look for a template named the return
        # value of this method.
        #
        # ==== Returns
        # * <tt>String</tt> - A template name
        def _implied_layout_name
          controller_path
        end
    end
    
    describe 'Kernel.srand' do
  it 'is a private method' do
    Kernel.should have_private_instance_method(:srand)
  end
    
      it 'calls #to_path on second argument when passed ?e and a filename' do
    p = mock('path')
    p.should_receive(:to_path).and_return @file
    Kernel.test(?e, p)
  end
    
      it 'is a private method' do
    Kernel.should have_private_instance_method(:warn)
  end
    
        if GitHub.api_credentials_type == :none
      puts <<~EOS
        You can create a new personal access token:
          #{GitHub::ALL_SCOPES_URL}
        #{Utils::Shell.set_variable_in_profile('HOMEBREW_GITHUB_API_TOKEN', 'your_token_here')}
    
      def prepend(*paths)
    @paths = parse(*paths, *@paths)
    self
  end
    
      prepend Compat
end

    
    desc 'LESS to stdin -> Sass to stdout'
task :less_to_scss, :branch do |t, args|
  require './tasks/converter'
  puts Converter.new(branch: args[:branch]).convert_less(STDIN.read)
end
    
        def compass?
      defined?(::Compass::Frameworks)
    end
    
        def byte_to_str_pos(pos)
      @s.string.byteslice(0, pos).length
    end
    
        def get_paths_by_type(dir, file_re, recursive = true)
      get_file_paths(dir, recursive).select { |path| path =~ file_re }
    end
    
    post '/' do
  connections.each { |out| out << 'data: #{params[:msg]}\n\n' }
  204 # response without entity body
end
    
    # include would include the module in Object
# extend only extends the `main` object
extend Sinatra::Delegator
    
          alias default_reaction deny
    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end
    
    RSpec.describe RuboCop::Cop::Layout::MultilineArrayBraceLayout, :config do
  subject(:cop) { described_class.new(config) }
    
          # Checks whether this node body is a void context.
      #
      # @return [Boolean] whether the `def` node body is a void context
      def void_context?
        method?(:initialize) || assignment_method?
      end
    
          # Returns the operator for the `kwsplat` as a string.
      #
      # @return [String] the double splat operator
      def operator
        DOUBLE_SPLAT
      end
    
    # Quiet some warnings we see when running in warning mode:
# RUBYOPT=-w bundle exec sidekiq
$TESTING = false
    
        worker_count.times do |count|
      template '/data/#{app}/shared/config/sidekiq_#{count}.yml' do
        owner node[:owner_name]
        group node[:owner_name]
        mode 0644
        source 'sidekiq.yml.erb'
        variables({
          :require => '/data/#{app}/current'
        })
      end
    end
    
          # Resque compatibility helpers.  Note all helpers
      # should go through Worker#client_push.
      #
      # Example usage:
      #   Sidekiq::Client.enqueue(MyWorker, 'foo', 1, :bat => 'bar')
      #
      # Messages are enqueued to the 'default' queue.
      #
      def enqueue(klass, *args)
        klass.client_push('class' => klass, 'args' => args)
      end
    
    
    # By leaving this as a class method, it can be pluggable and used by the Manager actor. Making it
    # an instance method will make it async to the Fetcher actor
    def self.bulk_requeue(inprogress, options)
      return if inprogress.empty?
    
          def __set_test_mode(mode)
        if block_given?
          current_mode = self.__test_mode
          begin
            self.__test_mode = mode
            yield
          ensure
            self.__test_mode = current_mode
          end
        else
          self.__test_mode = mode
        end
      end
    
          def disable(*opts)
        opts.each {|key| set(key, false) }
      end