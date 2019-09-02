
        
            def version
      ['--version', '-V',
       'Display the program version.',
       lambda do |_value|
         puts 'Capistrano Version: #{Capistrano::VERSION} (Rake Version: #{Rake::VERSION})'
         exit
       end]
    end
    
            if echo?
          $stdin.gets
        else
          $stdin.noecho(&:gets).tap { $stdout.print '\n' }
        end
      rescue Errno::EIO
        # when stdio gets closed
        return
      end
    
    MESSAGE
      end
    end
  end
end

    
          def properties
        @properties ||= Properties.new
      end
    
      # insert data
  fields.each do |field, values|
    updated = '  s.#{field} = ['
    updated << values.map { |v| '\n    %p' % v }.join(',')
    updated << '\n  ]'
    content.sub!(/  s\.#{field} = \[\n(    .*\n)*  \]/, updated)
  end
    
          def empty_cookie(host, path)
        {:value => '', :domain => host, :path => path, :expires => Time.at(0)}
      end
    
          def call(env)
        request               = Request.new(env)
        status, headers, body = app.call(env)
    
          expected_header = <<-END.chomp
rack.%2573ession=; domain=example.org; path=/; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.%2573ession=; domain=example.org; path=/some; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.%2573ession=; domain=example.org; path=/some/path; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/some; expires=Thu, 01 Jan 1970 00:00:00 -0000
rack.session=; domain=example.org; path=/some/path; expires=Thu, 01 Jan 1970 00:00:00 -0000
END
      expect(last_response.headers['Set-Cookie']).to eq(expected_header)
    end
  end
    
    ENV['GEM_HOME'] = ENV['GEM_PATH'] = LogStash::Environment.logstash_gem_home
Gem.use_paths(LogStash::Environment.logstash_gem_home)
    
        def execute
      raise PluginManager::FileNotFoundError, 'Can't file local file #{local_file}' unless ::File.exist?(local_file)
      raise PluginManager::InvalidPackError, 'Invalid format, the pack must be in zip format' unless valid_format?(local_file)
    
      # retrieve only the latest spec for all locally installed plugins
  # @return [Hash] result hash {plugin_name.downcase => plugin_spec}
  def find_latest_gem_specs
    LogStash::PluginManager.all_installed_plugins_gem_specs(gemfile).inject({}) do |result, spec|
      previous = result[spec.name.downcase]
      result[spec.name.downcase] = previous ? [previous, spec].max_by{|s| s.version} : spec
      result
    end
  end
end

    
          options = {:debug => ENV['LS_QA_DEBUG']}
      puts 'Destroying #{machines}'
      LogStash::VagrantHelpers.destroy(machines, options)
      puts 'Bootstrapping #{machines}'
      LogStash::VagrantHelpers.bootstrap(machines, options)
    end
    
          def line_class(line)
        if line =~ /^@@/
          'gc'
        elsif line =~ /^\+/
          'gi'
        elsif line =~ /^\-/
          'gd'
        else
          ''
        end
      end
    
    def cloned_testpath(path)
  repo   = File.expand_path(testpath(path))
  path   = File.dirname(repo)
  cloned = File.join(path, self.class.name)
  FileUtils.rm_rf(cloned)
  Dir.chdir(path) do
    %x{git clone #{File.basename(repo)} #{self.class.name} 2>/dev/null}
  end
  cloned
end
    
    context 'Precious::Views::Editing' do
  include Rack::Test::Methods
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    Precious::App.set(:gollum_path, @path)
    FileUtils.cp_r File.join(examples, 'revert.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
        # Test page_header_from_content(@content)
    actual = @view.title
    assert_equal '1 & 2', actual
  end
    
        alias get get_preference
    
          return_items.group_by(&:exchange_variant).map do |variant, variant_return_items|
        variant_inventory_units = variant_return_items.map(&:exchange_inventory_units).flatten
        line_item = Spree::LineItem.create!(variant: variant, quantity: variant_return_items.count, order: order)
        variant_inventory_units.each { |i| i.update!(line_item_id: line_item.id, order_id: order.id) }
      end
    
            def create
          authorize! :create, Image
          @image = scope.images.new(image_params)
          if @image.save
            respond_with(@image, status: 201, default_template: :show)
          else
            invalid_resource!(@image)
          end
        end
    
            def update
          @option_type = Spree::OptionType.accessible_by(current_ability, :update).find(params[:id])
          if @option_type.update(option_type_params)
            render :show
          else
            invalid_resource!(@option_type)
          end
        end
    
            def create
          authorize! :create, Spree::OptionValue
          @option_value = scope.new(option_value_params)
          if @option_value.save
            render :show, status: 201
          else
            invalid_resource!(@option_value)
          end
        end
    
            def show
          respond_with(@product_property)
        end
    
        def post
      post_config = yaml['post']
      parsed_parameters(post_config)
    end
    
      describe '#tmux' do
    it { expect(instance.tmux).to eq 'wemux' }
  end
end

    
        it 'joins array using ;' do
      expect(project.send('hook_#{hook_name}')).
        to eq('echo 'on hook'; echo 'another command here'')
    end
  end
end
    
        it 'should generate a project file using the correct project file path' do
      file = StringIO.new
      allow(File).to receive(:open) { |&block| block.yield file }
      Dir.mktmpdir do |dir|
        path = '#{dir}/#{name}.yml'
        _ = described_class.new.generate_project_file(name, path)
        expect(file.string).to match %r{\A# #{path}$}
      end
    end
  end
    
        context 'installed' do
      let(:version) { '2.4' }
      it { is_expected.to eq version.to_f }
    end
  end
    
      describe '.editor?' do
    context '$EDITOR is set' do
      before do
        allow(ENV).to receive(:[]).with('EDITOR') { 'vim' }
      end
    
          it 'specifies no tmux name option' do
        expect(window.tmux_window_name_option).to be_empty
      end
    end
  end
    
          def commands(command)
        COMMANDS[command] || super
      end
    
      get '/slow_response' do
    sleep 2
    'Finally!'
  end
    
      it 'can scroll the window to the vertical top' do
    @session.scroll_to :bottom
    @session.scroll_to :top
    expect(@session.evaluate_script('[window.scrollX || window.pageXOffset, window.scrollY || window.pageYOffset]')).to eq [0, 0]
  end
    
      it 'should click on a button' do
    @session.visit('/form')
    @session.click_link_or_button('awe123')
    expect(extract_results(@session)['first_name']).to eq('John')
  end