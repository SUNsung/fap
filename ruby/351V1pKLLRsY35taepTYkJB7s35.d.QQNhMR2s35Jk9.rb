
        
          # Get the title for the page.
  #
  # @param [Middleman::Page] page
  #
  # @return [String]
  def title_for(page)
    if page && page.data.page_title
      return '#{page.data.page_title} - Vagrant by HashiCorp'
    end
    
            def verify_binary(binary)
          # Checks for the existence of chef binary and error if it
          # doesn't exist.
          if windows?
            command = 'if ((&'#{binary}' -v) -Match 'Chef*'){ exit 0 } else { exit 1 }'
          else
            command = 'sh -c 'command -v #{binary}''
          end
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
    # Unset all host plugins so that we aren't executing subprocess things
# to detect a host for every test.
Vagrant.plugin('2').manager.registered.dup.each do |plugin|
  if plugin.components.hosts.to_hash.length > 0
    Vagrant.plugin('2').manager.unregister(plugin)
  end
end
    
        it 'raises an error if the download failed' do
      dl = double('downloader')
      allow(Vagrant::Util::Downloader).to receive(:new).and_return(dl)
      expect(dl).to receive(:download!).and_raise(
        Vagrant::Errors::DownloaderError.new(message: 'foo'))
    
            {
          host: port_info['HostIp'],
          port: port_info['HostPort']
        }
      end
    
          it 'should exit the process if exit_code has been set' do
        subject.custom(machine) { |m| Thread.current[:exit_code] = 1}
        subject.custom(machine) { |*_| }
        expect(Process).to receive(:exit!).with(1)
        subject.run
      end
    end
  end
end

    
        context 'when disabling compression or dsa_authentication flags' do
      let(:ssh_info) {{
        host: 'localhost',
        port: 2222,
        username: 'vagrant',
        private_key_path: [private_key_path],
        compression: false,
        dsa_authentication: false
      }}
    
          it 'Does not render below article variant when no variants published' do
        html_variant = create(:html_variant, published: false, approved: true, group: 'article_show_below_article_cta')
        get article.path + '?variant_version=0'
        expect(response.body).not_to include html_variant.html
      end
    
      def index
    @pages = Page.all
  end
    
        # Creates an instance of CategoryIndex for each category page, renders it, and
    # writes the output to a file.
    #
    #  +category_dir+ is the String path to the category folder.
    #  +category+     is the category currently being processed.
    def write_category_index(category_dir, category)
      index = CategoryIndex.new(self, self.source, category_dir, category)
      index.render(self.layouts, site_payload)
      index.write(self.dest)
      # Record the fact that this page has been added, otherwise Site::cleanup will remove it.
      self.pages << index
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
        context 'when I18n enforces available locales' do
      before { I18n.enforce_available_locales = true }
    
                    memo[memo_key] = handle_passed_param(declared_parent_param, passed_children_params) do
                  declared(passed_children_params, options, declared_children_params)
                end
              end
            else
              # If it is not a Hash then it does not have children.
              # Find its value or set it to nil.
              has_renaming = route_setting(:renamed_params) && route_setting(:renamed_params).find { |current| current[declared_param] }
              param_renaming = has_renaming[declared_param] if has_renaming
    
        class LazyValueArray < LazyValueEnumerable
      def initialize(array)
        super
        @value_hash = []
        array.each_with_index do |value, index|
          self[index] = value
        end
      end