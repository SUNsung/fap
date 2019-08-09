
        
              def test_invert_remove_foreign_key_with_on_delete_on_update
        enable = @recorder.inverse_of :remove_foreign_key, [:dogs, :people, on_delete: :nullify, on_update: :cascade]
        assert_equal [:add_foreign_key, [:dogs, :people, on_delete: :nullify, on_update: :cascade]], enable
      end
    
      teardown do
    reset_connection
  end
    
        expected_cart_output = 'Prefix Verb URI Pattern     Controller#Action\n  cart GET  /cart(.:format) cart#show\n'
    output = run_routes_command(['-c', 'cart'])
    assert_equal expected_cart_output, output
    
            def initialize(symbol)
          @symbol = symbol.to_sym
        end
    
        context 'without parameters within if statement' do
      setup do
        content = <<~CONTENT
          ---
          title: without parameters within if statement
          ---
    
      context '#glob_include?' do
    setup do
      @site = Site.new(site_configuration)
      @filter = EntryFilter.new(@site)
    end
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end

    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
        def add(path, content)
      @pages[path] = content
    end
    
        def parse_as_fragment
      Nokogiri::HTML.fragment @content, 'UTF-8'
    end
  end
end

    
          def stub(path, &block)
        @stubs[path] = block
        @stubs
      end
    end
    
            css('button.verbose', 'button.verbose + .l-verbose-section', 'a[id=top]', 'a[href='#top']', '.sidebar', 'br').remove
    
    end
end

    
      #
  # Kills off the connection threads if there are any hanging around.
  #
  def cleanup_handler
    # Kill any remaining handle_connection threads that might
    # be hanging around
    conn_threads.each { |thr|
      thr.kill
    }
  end
    
        if valid
    
        register_options(
      [
        OptPath.new('SOURCE_FILE', [true, 'Path to source code']),
        OptBool.new('RUN_BINARY', [false, 'Execute the generated binary', false]),
        OptString.new('ASSEMBLIES', [false, 'Any assemblies outside the defaults', 'mscorlib.dll, System.dll, System.Xml.dll, System.Data.dll' ]),
        OptString.new('OUTPUT_TARGET', [false, 'Name and path of the generated binary, default random, omit extension' ]),
        OptString.new('COMPILER_OPTS', [false, 'Options to pass to compiler', '/optimize']),
        OptString.new('CODE_PROVIDER', [true, 'Code provider to use', 'Microsoft.CSharp.CSharpCodeProvider'])
      ], self.class
    )
    register_advanced_options(
      [
        OptString.new('NET_CLR_VER', [false, 'Minimum NET CLR version required to compile', '4.0'])
      ], self.class
    )
  end
    
    else
  print_error('This version of Meterpreter is not supported with this Script!')
  raise Rex::Script::Completed
end

    
      def initialize(info = {})
    super(
      update_info(
        info,
        'Name'          => 'OSX Meterpreter, Reverse HTTP Inline',
        'Description'   => 'Run the Meterpreter / Mettle server payload (stageless)',
        'Author'        => [
          'Adam Cammack <adam_cammack[at]rapid7.com>',
          'Brent Cook <brent_cook[at]rapid7.com>',
          'timwr'
        ],
        'Platform'      => 'osx',
        'Arch'          => ARCH_X64,
        'License'       => MSF_LICENSE,
        'Handler'       => Msf::Handler::ReverseHttp,
        'Session'       => Msf::Sessions::Meterpreter_x64_OSX
      )
    )
  end
    
            def jvm_payload
          @stats.jvm
        end
    
        BUNDLE_DIR = ::File.join(LOGSTASH_HOME, 'vendor', 'bundle')
    GEMFILE_PATH = ::File.join(LOGSTASH_HOME, 'Gemfile')
    LOCAL_GEM_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'local_gems')
    CACHE_PATH = ::File.join(LOGSTASH_HOME, 'vendor', 'cache')
    LOCKFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile.lock'))
    GEMFILE = Pathname.new(::File.join(LOGSTASH_HOME, 'Gemfile'))
    
        # add path for bare/ungemified plugins lookups. the path must be the base path that will include
    # the dir structure 'logstash/TYPE/NAME.rb' where TYPE is 'inputs' 'filters', 'outputs' or 'codecs'
    # and NAME is the name of the plugin
    # @param path [String] plugins path to add
    def add_plugin_path(path)
      $LOAD_PATH << path
    end
  end
end
    
        before(:each) { expect($LOAD_PATH).to_not include(path) }
    after(:each) { $LOAD_PATH.delete(path) }
    
            out = dir.convert(FPM::Package::RPM)
        out.license = license
        out.attributes[:rpm_use_file_permissions] = true
        out.attributes[:rpm_user] = 'root'
        out.attributes[:rpm_group] = 'root'
        out.attributes[:rpm_os] = 'linux'
        out.config_files << '/etc/logstash/startup.options'
        out.config_files << '/etc/logstash/jvm.options'
        out.config_files << '/etc/logstash/log4j2.properties'
        out.config_files << '/etc/logstash/logstash.yml'
        out.config_files << '/etc/logstash/logstash-sample.conf'
        out.config_files << '/etc/logstash/pipelines.yml'
      when 'debian', 'ubuntu'
        require 'fpm/package/deb'
    
        def cache_key_for_products
      count = @products.count
      max_updated_at = (@products.maximum(:updated_at) || Date.today).to_s(:number)
      products_cache_keys = 'spree/products/all-#{params[:page]}-#{max_updated_at}-#{count}'
      (common_product_cache_keys + [products_cache_keys]).compact.join('/')
    end
    
            def update
          @image = scope.images.accessible_by(current_ability, :update).find(params[:id])
          if @image.update(image_params)
            respond_with(@image, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def create
          authorize! :create, Spree::OptionType
          @option_type = Spree::OptionType.new(option_type_params)
          if @option_type.save
            render :show, status: 201
          else
            invalid_resource!(@option_type)
          end
        end
    
            def destroy
          @stock_item = StockItem.accessible_by(current_ability, :destroy).find(params[:id])
          @stock_item.destroy
          respond_with(@stock_item, status: 204)
        end
    
            private
    
            def user_params
          params.require(:user).permit(permitted_user_attributes |
                                         [bill_address_attributes: permitted_address_attributes,
                                          ship_address_attributes: permitted_address_attributes])
        end
      end
    end
  end
end

    
            def product
          if params[:product_id]
            @product ||= Spree::Product.accessible_by(current_ability, :show).
                         friendly.find(params[:product_id])
          end
        end
    
        def window_options
      yaml['windows'].map(&:values).flatten
    end