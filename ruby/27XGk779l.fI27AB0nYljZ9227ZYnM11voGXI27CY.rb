
        
              @site.exclude = excludes + ['exclude*']
      assert_equal files, @site.reader.filter_entries(excludes + files + ['excludeA'])
    end
    
    Mercenary.program(:jekyll) do |p|
  p.version Jekyll::VERSION
  p.description 'Jekyll is a blog-aware, static site generator in Ruby'
  p.syntax 'jekyll <subcommand> [options]'
    
          def before_feature(_feature)
        @exceptions = []
        @indent = 0
      end
    
    module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
          it 'requires the passwords to match when changing them' do
        visit edit_admin_user_path(users(:bob))
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: 'no_match'
        click_on 'Update User'
        expect(page).to have_text('Password confirmation doesn't match')
      end
    end
    
        it 'returns a correct icon tag for GitHub' do
      icon = omniauth_provider_icon(:github)
      expect(icon).to be_html_safe
      elem = Nokogiri(icon).at('i.fa.fa-github')
      expect(elem).to be_a Nokogiri::XML::Element
    end
    
        it 'creates a scenario label with the given text' do
      expect(scenario_label(scenario, 'Other')).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Other</span>'
      )
    end
  end
    
          expect(exporter.as_json[:control_links]).to eq([{ :controller => guid_order(agent_list, :jane_rain_notifier_agent), :control_target => guid_order(agent_list, :jane_weather_agent) }])
    end
  end
    
        it 'accepts objects as well as strings' do
      log = AgentLog.log_for_agent(agents(:jane_website_agent), events(:bob_website_agent_event).payload)
      expect(log.message).to include(''title'=>'foo'')
    end
  end
    
        it 'makes followers unfollow old account' do
      expect(follower.following?(old_account)).to be false
    end
    
          it 'not calls errors.add' do
        expect(errors).not_to have_received(:add).with(attribute, any_args)
      end
    end
  end
end

    
      sidekiq_options unique: :until_executed, retry: 0
    
    namespace :bower do
    
        def log_http_get_file(url, cached = false)
      s = '  #{'CACHED ' if cached}GET #{url}...'
      if cached
        puts dark green s
      else
        puts dark cyan s
      end
    end
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
          def response_type_as_space_seperated_values
        [*session[:response_type]].join(' ')
      end
    
      def contacts_by_aspect(aspect_id)
    contacts = current_user.contacts.arel_table
    aspect_memberships = AspectMembership.arel_table
    current_user.contacts.joins(
      contacts.outer_join(aspect_memberships).on(
        aspect_memberships[:aspect_id].eq(aspect_id).and(
          aspect_memberships[:contact_id].eq(contacts[:id])
        )
      ).join_sources
    )
  end
    
            # Initialize a new instance
        #
        # @param  [Hash{Symbol=>String}] pods_by_state
        #         The name of the pods grouped by their state
        #         (`:added`, `:removed`, `:changed` or `:unchanged`).
        #
        def initialize(pods_by_state = nil)
          @added     = Set.new
          @deleted   = Set.new
          @changed   = Set.new
          @unchanged = Set.new
    
      # Loaded immediately after dependencies to ensure proper override of their
  # UI methods.
  #
  require 'cocoapods/user_interface'
    
            def create_project(path, object_version, pod_target_subproject)
          object_version ||= Xcodeproj::Constants::DEFAULT_OBJECT_VERSION
          Pod::Project.new(path, false, object_version, :pod_target_subproject => pod_target_subproject)
        end
    
          # @return [String] Wraps a string taking into account the width of the
      # terminal and an option indent. Adapted from
      # https://macromates.com/blog/2006/wrapping-text-with-regular-expressions/
      #
      # @param [String] string  The string to wrap
      #
      # @param [String] indent  The string to use to indent the result.
      #
      # @return [String]        The formatted string.
      #
      # @note If CocoaPods is not being run in a terminal or the width of the
      # terminal is too small a width of 80 is assumed.
      #
      def wrap_string(string, indent = 0)
        if disable_wrap
          (' ' * indent) + string
        else
          first_space = ' ' * indent
          indented = CLAide::Command::Banner::TextWrapper.wrap_with_indent(string, indent, 9999)
          first_space + indented
        end
      end
    end
  end
  UI = UserInterface
    
          it 'shows the git URL (when an upstream is not configured)' do
        output = run_command('repo', 'list')
        output.should.include? '- URL:  https://github.com/apiaryio/Specs'
      end
    end
  end
end

    
              file = AppTargetHelper.create_app_host_main_file(project, :osx)
          file.basename.to_s.should == 'main.m'
          file.read.should == AppTargetHelper::MACOS_APP_HOST_MAIN_CONTENTS
        end
      end
    
      def symlinked?(symlink_path, target_path)
    '[ #{symlink_path} -ef #{target_path} ]'
  end
    
      at_exit do
    if ENV['KEEP_RUNNING']
      puts 'Vagrant vm will be left up because KEEP_RUNNING is set.'
      puts 'Rerun without KEEP_RUNNING set to cleanup the vm.'
    else
      vagrant_cli_command('destroy -f')
    end
  end
    
            def call
          @validator.call
        end
      end
    end
  end
end

    
          return_items.group_by(&:exchange_variant).map do |variant, variant_return_items|
        variant_inventory_units = variant_return_items.map(&:exchange_inventory_units).flatten
        line_item = Spree::LineItem.create!(variant: variant, quantity: variant_return_items.count, order: order)
        variant_inventory_units.each { |i| i.update!(line_item_id: line_item.id, order_id: order.id) }
      end
    
                allow(subject).to receive(:shipping_methods).and_return(shipping_methods)
    
            def new; end
    
            def destroy
          if @property
            authorize! :destroy, @property
            @property.destroy
            respond_with(@property, status: 204)
          else
            invalid_resource!(@property)
          end
        end
    
            private