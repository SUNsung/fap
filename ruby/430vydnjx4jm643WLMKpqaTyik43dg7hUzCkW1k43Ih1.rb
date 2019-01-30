
        
            def slug
      @slug ||= subpath.sub(/\A\//, '').remove(/\.html\z/)
    end
    
            css('.filetree .children').each do |node|
          node.css('.file').each do |n|
            n.content = '  #{n.content}'
          end
        end
    
      url 'http://swupdl.adobe.com/updates/oobe/aam20/mac/AdobeLightroom-#{version.major}.0/#{version}/setup.dmg'
  name 'Adobe Photoshop Lightroom'
  homepage 'https://www.adobe.com/products/photoshop-lightroom.html'
    
            if Utils::HttpClient.remote_file_exist?(uri)
          PluginManager.ui.debug('Found package at: #{uri}')
          return LogStash::PluginManager::PackInstaller::Remote.new(uri)
        else
          PluginManager.ui.debug('Package not found at: #{uri}')
          return nil
        end
      rescue SocketError, Errno::ECONNREFUSED, Errno::EHOSTUNREACH => e
        # This probably means there is a firewall in place of the proxy is not correctly configured.
        # So lets skip this strategy but log a meaningful errors.
        PluginManager.ui.debug('Network error, skipping Elastic pack, exception: #{e}')
    
          PluginManager.ui.info('Installing file: #{local_file}')
      uncompressed_path = uncompress(local_file)
      PluginManager.ui.debug('Pack uncompressed to #{uncompressed_path}')
      pack = LogStash::PluginManager::PackInstaller::Pack.new(uncompressed_path)
      raise PluginManager::InvalidPackError, 'The pack must contains at least one plugin' unless pack.valid?
    
        # remove any version constrain from the Gemfile so the plugin(s) can be updated to latest version
    # calling update without requirements will remove any previous requirements
    plugins = plugins_to_update(previous_gem_specs_map)
    # Skipping the major version validation when using a local cache as we can have situations
    # without internet connection.
    filtered_plugins = plugins.map { |plugin| gemfile.find(plugin) }
      .compact
      .reject { |plugin| REJECTED_OPTIONS.any? { |key| plugin.options.has_key?(key) } }
      .each   { |plugin| gemfile.update(plugin.name) }
    
      it 'returns the source' do
    expect(subject.source).to eq(source)
  end
    
          def sidebar
        if @sidebar.nil?
          if page = @page.sidebar
            @sidebar = page.text_data
          else
            @sidebar = false
          end
        end
        @sidebar
      end
    
        assert last_response.ok?
    assert_match /meta name='robots' content='noindex, nofollow'/, last_response.body
  end
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
    def gem_file
  '#{name}-#{version}.gem'
end
    
        # Extract the path string that Gollum::Wiki expects
    def extract_path(file_path)
      return nil if file_path.nil?
      last_slash = file_path.rindex('/')
      if last_slash
        file_path[0, last_slash]
      end
    end
    
                  expect(new_source).to eq(['#{prefix}#{open}#{a},',
                                        '#{b}#{close}',
                                        suffix].join($RS))
            end
          end
        end
      end
    end
    
          # Returns the keyword of the `case` statement as a string.
      #
      # @return [String] the keyword of the `case` statement
      def keyword
        'case'
      end
    
    
    {      # Checks whether the `hash` literal is delimited by curly braces.
      #
      # @return [Boolean] whether the `hash` literal is enclosed in braces
      def braces?
        loc.end && loc.end.is?('}')
      end
    end
  end
end

    
    Then /^I should see a fieldset titled '([^']*)'$/ do |title|
  expect(page).to have_css 'fieldset legend', text: title
end