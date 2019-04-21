
        
                  if name_and_id['for']
            name_and_id['id'] = name_and_id['for']
          else
            name_and_id.delete('id')
          end
    
        group = Group.create!(name: 'bob')
    group.add(moderator)
    group.save
    
        def run(action_named: nil, action_class_ref: nil, parameter_map: nil)
      action_return = runner.execute_action(action_named, action_class_ref, [parameter_map], custom_dir: '.')
      return action_return
    end
    
          require 'gh_inspector'
      require 'fastlane_core/ui/github_issue_inspector_reporter'
    
            tag = options[:tag] || '#{options[:grouping]}/#{lane_name}/#{options[:prefix]}#{options[:build_number]}#{options[:postfix]}'
        message = options[:message] || '#{tag} (fastlane)'
    
        def doc_default_value
      return '[*](#parameters-legend-dynamic)' if self.default_value_dynamic
      return '' if self.default_value.nil?
      return '`''`' if self.default_value.instance_of?(String) && self.default_value.empty?
      return '`:#{self.default_value}`' if self.default_value.instance_of?(Symbol)
    
    # remove (double and single) quote pairs
# un-double-double quote resulting string
def simulate_windows_shell_unwrapping(string)
  regex = /^('|')(([^'])(\S*)([^']))('|')$/
  unless string.to_s.match(regex).nil?
    string = string.to_s.match(regex)[2] # get only part in quotes
    string.to_s.gsub!('''', ''') # remove double double quotes
  end
  return string
end
    
          it 'activates an existing user' do
        users(:bob).deactivate!
        visit admin_users_path
        find(:css, 'a[href='/admin/users/#{users(:bob).id}/activate']').click
        expect(page).to have_no_text('inactive')
        users(:bob).reload
        expect(users(:bob)).to be_active
      end
    end
  end
end

    
        it 'returns an active nav link' do
      stub(self).current_page?('/things') { true }
      nav = nav_link('Things', '/things')
      expect(nav).to be_html_safe
      a = Nokogiri(nav).at('li.active > a[href='/things']')
      expect(a).to be_a Nokogiri::XML::Element
      expect(a.text.strip).to eq('Things')
    end
    
          it 'generates a DOT script' do
        expect(agents_dot(@agents)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1\];
            \k<bar2> \[label=bar2,style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3\];
          \}
          \z
        }x)
      end
    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
      describe '#import and #generate_diff' do
    let(:scenario_import) do
      _import = ScenarioImport.new(:data => valid_data)
      _import.set_user users(:bob)
      _import
    end
    
          @log.level = 5
      expect(@log).not_to be_valid
      expect(@log).to have(1).error_on(:level)
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
    Rails.application.initialize!
    
    module Devise
  # Responsible for handling devise mappings and routes configuration. Each
  # resource configured by devise_for in routes is actually creating a mapping
  # object. You can refer to devise_for in routes for usage options.
  #
  # The required value in devise_for is actually not used internally, but it's
  # inflected to find all other values.
  #
  #   map.devise_for :users
  #   mapping = Devise.mappings[:user]
  #
  #   mapping.name #=> :user
  #   # is the scope used in controllers and warden, given in the route as :singular.
  #
  #   mapping.as   #=> 'users'
  #   # how the mapping should be search in the path, given in the route as :as.
  #
  #   mapping.to   #=> User
  #   # is the class to be loaded from routes, given in the route as :class_name.
  #
  #   mapping.modules  #=> [:authenticatable]
  #   # is the modules included in the class
  #
  class Mapping #:nodoc:
    attr_reader :singular, :scoped_path, :path, :controllers, :path_names,
                :class_name, :sign_out_via, :format, :used_routes, :used_helpers,
                :failure_app, :router_name
    
          # Read each line as a path
      File.new(inputs, 'r').each_line do |line|
        # Handle each line as if it were an argument
        input.input(line.strip)
      end
    end
    
        # npm installs dependencies in the module itself, so if you do
    # 'npm install express' it installs dependencies (like 'connect')
    # to: node_modules/express/node_modules/connect/...
    #
    # To that end, I don't think we necessarily need to include
    # any automatic dependency information since every 'npm install'
    # is fully self-contained. That's why you don't see any bother, yet,
    # to include the package's dependencies in here.
    #
    # It's possible someone will want to decouple that in the future,
    # but I will wait for that feature request.
  end
    
      dont_obsolete_paths = []
  option '--dont-obsolete', 'DONT_OBSOLETE_PATH',
    'A file path for which to 'dont-obsolete' in the built PackageInfo. ' \
    'Can be specified multiple times.' do |path|
      dont_obsolete_paths << path
    end
    
        bin_dir = attributes[:pear_bin_dir] || 'usr/bin'
    logger.info('Setting bin_dir', :bin_dir => bin_dir)
    safesystem('pear', '-c', config, 'config-set', 'bin_dir', bin_dir)
    
        args = [ tar_cmd,
             '-C',
             staging_path,
             '-cf',
             payload_tar,
             '--owner=0',
             '--group=0',
             '--numeric-owner',
             '.' ]
    
      def specfile(builddir)
    '#{builddir}/pkginfo'
  end
    
        if !success
      raise ProcessFailed.new('#{program} failed (exit code #{exit_code})' \
                              '. Full command was:#{args.inspect}')
    end
    return success
  end # def safesystem
    
    Given /^(?:|I )am on (.+)$/ do |page_name|
  visit path_to(page_name)
end
    
        def empty_file?
      File.exist?(@filepath) && File.size(@filepath) == 0
    end
    
        private
    
        def path
      @file.respond_to?(:path) ? @file.path : @file
    end