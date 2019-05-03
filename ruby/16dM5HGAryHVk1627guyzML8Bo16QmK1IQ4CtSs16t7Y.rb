
        
                  add_default_name_and_id_for_value(tag_value, name_and_id)
          options.delete('index')
          options.delete('namespace')
          options['for'] = name_and_id['id'] unless options.key?('for')
    
        def insert_after(index, *names)
      insert assert_index(index) + 1, *names
    end
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
            css('h1:not(:first-child)').each do |node|
          node.name = 'h2'
        end unless at_css('h2')
    
            name.prepend '#{breadcrumbs.join('.')}#' if breadcrumbs.present? && breadcrumbs[0] != name
        name << '()' if %w(Function Method Constructor).include?(subtitle)
        name
      end
    
    $x = [1, 2, 3, 4]
$y = []
    
            raydir = Vec.new(rx, ry, rz)
        ray = Ray.new(p0, raydir)
    
        reversible(&method(:up_down))
  end
    
        it 'generates the contacts_json fixture', :fixture => true do
      json = bob.contacts.map { |c|
               ContactPresenter.new(c, bob).full_hash_with_person
             }.to_json
      save_fixture(json, 'contacts_json')
    end
  end
end

    
      describe '#destroy' do
    before do
      sign_in @user, scope: :user
    end
    it 'redirects to / for a non-mobile user' do
      delete :destroy
      expect(response).to redirect_to new_user_session_path
    end
    
    Then(/^directories referenced in :linked_files are created in shared$/) do
  dirs = TestApp.linked_files.map { |path| TestApp.shared_path.join(path).dirname }
  dirs.each do |dir|
    run_vagrant_command(test_dir_exists(dir))
  end
end
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
        def load_imports
      if options.show_tasks && Rake::Task.task_defined?('load:defaults')
        invoke 'load:defaults'
        set(:stage, '')
        Dir[deploy_config_path].each { |f| add_import f }
      end
    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad
    
    ::Bundler.with_friendly_errors do
  ::Bundler::CLI.start(ARGV, :debug => true)
end

    
        def self.find_by_name_with_wildcards(pattern)
      re = transform_pattern_into_re(pattern)
      ::Gem::Specification.find_all.select do |specification|
        specification.name =~ re
      end
    end
    
        puts('Generated at #{target_file}')
  end
    
            PluginManager.ui.debug('Looking if package named: #{plugin_name} exists at #{uri}')
    
        private
    def uncompress(source)
      temporary_directory = Stud::Temporary.pathname
      LogStash::Util::Zip.extract(source, temporary_directory, LOGSTASH_PATTERN_RE)
      temporary_directory
    rescue Zip::Error => e
      # OK Zip's handling of file is bit weird, if the file exist but is not a valid zip, it will raise
      # a `Zip::Error` exception with a file not found message...
      raise InvalidPackError, 'Cannot uncompress the zip: #{source}'
    end
    
      # create list of plugins to update
  def plugins_to_update(previous_gem_specs_map)
    if update_all?
      previous_gem_specs_map.values.map{|spec| spec.name}
    else
      # If the plugins isn't available in the gemspec or in 
      # the gemfile defined with a local path, we assume the plugins is not
      # installed.
      not_installed = plugins_arg.select{|plugin| !previous_gem_specs_map.has_key?(plugin.downcase) && !gemfile.find(plugin) }
      signal_error('Plugin #{not_installed.join(', ')} is not installed so it cannot be updated, aborting') unless not_installed.empty?
      plugins_arg
    end
  end
    
          it 'list the plugin with his version' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --verbose #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name} \(\d+\.\d+.\d+\)/)
      end
    end
  end
end

    
        context 'update all the plugins' do
      it 'has executed successfully' do
        logstash.run_command_in_path('bin/logstash-plugin update --no-verify')
        expect(logstash).to have_installed?(plugin_name, '0.1.1')
      end
    end
  end
end

    
          def default_markup
        Precious::App.settings.default_markup
      end
    end
  end
end

    
          attr_reader :page, :content
    
      # Here's the dir structure of lotr.git
  #
  # .
  # ├── Bilbo-Baggins.md
  # ├── Data.csv
  # |-- Data-Two.csv -> Data.csv
  # ├── Gondor
  # │   ├── Boromir.md
  # │   ├── _Footer.md
  # │   ├── _Header.md
  # │   └── _Sidebar.md
  # |-- Hobbit.md -> Bilbo-Baggins.md
  # ├── Home.textile
  # ├── Mordor
  # │   ├── Eye-Of-Sauron.md
  # │   ├── _Footer.md
  # │   ├── _Header.md
  # │   ├── _Sidebar.md
  # │   ├── eye.jpg
  # │   └── todo.txt
  # ├── My-Precious.md
  # ├── Samwise\ Gamgee.mediawiki
  # ├── _Footer.md
  # ├── _Header.md
  # └── _Sidebar.md
  #
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
    def utf8(str)
  str.respond_to?(:force_encoding) ? str.force_encoding('utf-8') : str
end
    
          # File.basename is too eager to please and will return the last
      # component of the path even if it ends with a directory separator.
      ::File.basename(file_path)
    end