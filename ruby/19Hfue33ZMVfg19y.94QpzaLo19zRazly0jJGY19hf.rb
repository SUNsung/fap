
        
            group.remove(moderator)
    group.save
    
    Group.user_trust_level_change!(-1, TrustLevel[4])
    
          if staff.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('staff_category_description'),
          title: I18n.t('category.topic_prefix', category: staff.name),
          category: staff.name,
          archetype: Archetype.default
        )
        post = creator.create
    
            if b_length > a_length
          (b_length - a_length).times { a_split.insert(-2, 0) }
        elsif a_length > b_length
          (a_length - b_length).times { b_split.insert(-2, 0) }
        end
    
        DATA_URL = 'data:'.freeze
    
        def to_a
      @filters.dup
    end
    
        def url
      @url ||= URL.parse request.base_url
    end
    
            subclass.base_url = base_url
        subclass.root_path = root_path
        subclass.initial_paths = initial_paths.dup
        subclass.options = options.deep_dup
        subclass.html_filters = html_filters.inheritable_copy
        subclass.text_filters = text_filters.inheritable_copy
        subclass.stubs = stubs.dup
      end
    
        def join(*args)
      self.class.join self, *args
    end
    
            css('img[style]').each do |node|
          node['align'] ||= node['style'][/float:\s*(left|right)/, 1]
          node['style'] = node['style'].split(';').map(&:strip).select { |s| s =~ /\Awidth|height/ }.join(';')
        end
    
      # Causes some terminals to display secure password entry indicators
  def noecho_gets
    system 'stty -echo'
    result = $stdin.gets
    system 'stty echo'
    puts
    result
  end
    
          new_initial_revision_var = 'HOMEBREW_UPDATE_BEFORE#{repo_var}'
      new_current_revision_var = 'HOMEBREW_UPDATE_AFTER#{repo_var}'
    
        # @return [String] the ruby version string bundler uses to craft its gem path
    def gem_ruby_version
      RbConfig::CONFIG['ruby_version']
    end
    
            if explicit_plugins.any? { |spec| filename =~ /^#{spec.name}/ }
          FileUtils.mv(gem_file, ::File.join(explicit_path, filename))
        else
          FileUtils.mv(gem_file, ::File.join(dependencies_path, filename))
        end
      end
    end
    
          def get_installer_for(plugin_name)
        uri = pack_uri(plugin_name)
    
      describe '#system?' do
    context 'when the pipeline is a system pipeline' do
      let(:settings) { mock_settings({ 'pipeline.system' => true })}
    
        context 'with a specific plugin' do
      let(:plugin_name) { 'logstash-input-stdin' }
      it 'list the plugin and display the plugin name' do
        result = logstash.run_command_in_path('bin/logstash-plugin list #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name}$/)
      end