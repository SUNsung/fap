
        
        While attempting to convert the above code, Pygments.rb returned an unacceptable value.
This is usually a timeout problem solved by running `jekyll build` again.
MSG
          raise ArgumentError, 'Pygments.rb returned an unacceptable value '\
          'when attempting to highlight some code.'
        end
    
      url = File.dirname(url)
  url == FORWARD_SLASH ? url : '#{url}/'
end
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
    def source_dir(*subdirs)
  test_dir('source', *subdirs)
end
    
        # Gets/Sets the Hash that holds the metadata for this layout.
    attr_accessor :data
    
        # Build an array of allowed plugin gem names.
    #
    # Returns an array of strings, each string being the name of a gem name
    #   that is allowed to be used.
    def whitelist
      @whitelist ||= Array[site.config['whitelist']].flatten
    end
    
        context 'with keywords' do
      let(:options) do
        {
          name: { 'en-US' => 'Fastlane Demo' },
          description: { 'en-US' => 'Demo description' },
          keywords: { 'en-US' => 'Some, key, words' }
        }
      end
    
        @dry_run_results.update(
      memory: memory,
      log: log.string,
    )
  ensure
    @dry_run = false
  end
    
        respond_to do |format|
      format.html
      format.json { render json: @events }
    end
  end
    
      it 'implicitly has a count of one when no count modifier is passed' do
    '\xc2\x80\xc2\x81\xc2\x82\xc2\x83'.unpack('U1').should == [0x80]
  end
    
      def self.critical_thread_yields_to_main_thread(is_thread_sleep=false, is_thread_stop=false)
    @@after_first_sleep = false
    
        it 'propagates inner exception to Thread.join if there is an outer ensure clause' do
      thread = ThreadSpecs.dying_thread_with_outer_ensure(@method) { }
      lambda { thread.join }.should raise_error(RuntimeError, 'In dying thread')
    end
    
        ScratchPad.recorded.should == nil
  end
end

    
    ###
### methods
###
    
          # A string representation of the importer.
      # Should be overridden by subclasses.
      #
      # This is used to help debugging,
      # and should usually just show the load path encapsulated by this importer.
      #
      # @return [String]
      def to_s
        Sass::Util.abstract(self)
      end
    
            def define_logger(name, options = {})
          class_eval <<-RUBY, __FILE__, __LINE__ + 1
            def #{name}(message)
              #{options.fetch(:to, :log)}(#{name.inspect}, message)
            end
          RUBY
        end
      end
    end
  end
end

    
        # Returns a representation of the query as an array of strings and
    # potentially {Sass::Script::Tree::Node}s (if there's interpolation in it).
    # When the interpolation is resolved and the strings are joined together,
    # this will be the string representation of this query.
    #
    # @return [Array<String, Sass::Script::Tree::Node>]
    def to_a
      Sass::Util.intersperse(queries.map {|q| q.to_a}, ', ').flatten
    end
    
            {
          :always_update     => false,
          :template_location => root + '/public/stylesheets/sass',
          :css_location      => root + '/public/stylesheets',
          :cache_location    => root + '/tmp/sass-cache',
          :always_check      => env != 'production',
          :quiet             => env != 'production',
          :full_exception    => env != 'production'
        }.freeze
      end
    end
  end
    
          def stage_definitions
        stage_config_path.join('*.rb')
      end
    
      # Read and eval a .rake file in such a way that `self` within the .rake file
  # refers to this plugin instance. This gives the tasks in the file access to
  # helper methods defined by the plugin.
  def eval_rakefile(path)
    contents = IO.read(path)
    instance_eval(contents, path, 1)
  end
    
    describe Capistrano::Application do
  it 'provides a --trace option which enables SSHKit/NetSSH trace output'
    
            def update
          authorize! :update, stock_location
          if stock_location.update_attributes(stock_location_params)
            respond_with(stock_location, status: 200, default_template: :show)
          else
            invalid_resource!(stock_location)
          end
        end
    
            def create
          authorize! :create, StockMovement
          @stock_movement = scope.new(stock_movement_params)
          if @stock_movement.save
            respond_with(@stock_movement, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_movement)
          end
        end