
        
                  @object_name.sub!(/\[\]$/, '') || @object_name.sub!(/\[\]\]$/, ']')
          @object = retrieve_object(options.delete(:object))
          @skip_default_ids = options.delete(:skip_default_ids)
          @allow_method_names_outside_object = options.delete(:allow_method_names_outside_object)
          @options = options
    
              def initialize(template_object, object_name, method_name, object, tag_value)
            @template_object = template_object
            @object_name = object_name
            @method_name = method_name
            @object = object
            @tag_value = tag_value
          end
    
          []
    end
    
        def initialize(lookup_context)
      @lookup_context = lookup_context
    end
    
        group.add(moderator)
    group.save
    
    gem 'rails', '~> 5.2'
gem 'omniauth', '~> 1.3'
gem 'oauth2'
gem 'omniauth-oauth2'
gem 'rdoc'
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
          def remember_cookie_values(resource)
        options = { httponly: true }
        options.merge!(forget_cookie_values(resource))
        options.merge!(
          value: resource.class.serialize_into_cookie(resource),
          expires: resource.remember_expires_at
        )
      end
    
        if last_request_at.is_a? Integer
      last_request_at = Time.at(last_request_at).utc
    elsif last_request_at.is_a? String
      last_request_at = Time.parse(last_request_at)
    end
    
              # Otherwise add the block to the list of hooks for this action.
          hooks << block
        end
    
              @__invalid_methods ||= Set.new
          @__invalid_methods.add(name)
    
            protected
    
    describe 'Kernel.sleep' do
  it 'needs to be reviewed for spec completeness'
end

    
        lambda {
      catch :blah do
        throw :blah, :return_value, 2, 3, 4, 5
      end
    }.should raise_error(ArgumentError)
  end
    
        $Kernel_trace_var_global = 'foo'
    captured.should == 'foo'
  end
    
      it 'does not call #write on $stderr if $VERBOSE is nil' do
    lambda {
      $VERBOSE = nil
      warn('this is some simple text')
    }.should output(nil, '')
  end
    
    When /^I have user with username '([^']*)' in an aspect called '([^']*)'$/ do |username, aspect|
  user = User.find_by_username(username)
  contact = @me.reload.contact_for(user.person)
  contact.aspects << @me.aspects.find_by_name(aspect)
end
    
    # Ensure we know the appservers port
Capybara.server_port = AppConfig.pod_uri.port
Rails.application.routes.default_url_options[:host] = AppConfig.pod_uri.host
Rails.application.routes.default_url_options[:port] = AppConfig.pod_uri.port
    
          @conv2 = Conversation.create(hash)
      Message.create(:author => @person, :created_at => Time.now + 100, :text => 'message', :conversation_id => @conv2.id)
             .increase_unread(alice)
    
        it 'returns a 404 for a post not visible to the user' do
      sign_in eve
      expect {
        get :index, params: {post_id: @message.id}
      }.to raise_error(ActiveRecord::RecordNotFound)
    end
    
    # Declares a dependency to the git repo of CocoaPods gem. This declaration is
# compatible with the local git repos feature of Bundler.
#
def cp_gem(name, repo_name, branch = 'master', path: false)
  return gem name if SKIP_UNRELEASED_VERSIONS
  opts = if path
           { :path => '../#{repo_name}' }
         else
           url = 'https://github.com/CocoaPods/#{repo_name}.git'
           { :git => url, :branch => branch }
         end
  gem name, opts
end
    
                case platform
            when 'iOS' then self.platform :ios, '10.0'
            when 'macOS' then self.platform :macos, '10.10'
            end
    
        # Returns a new {Gem::Version} based on the systems `git` version.
    #
    # @return [Gem::Version]
    #
    def self.git_version
      raw_version = Executable.capture_command('git', ['--version']).first
      unless match = raw_version.scan(/\d+\.\d+\.\d+/).first
        raise 'Failed to extract git version from `git --version` (#{raw_version.inspect})'
      end
      Gem::Version.new(match)
    end
    
      gem.files         = `git ls-files -z`.split('\x0').reject { |f| f =~ /^docs/ }
  gem.executables   = %w(cap capify)
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.require_paths = ['lib']
    
    Then(/^it creates the file with the remote_task prerequisite$/) do
  TestApp.linked_files.each do |file|
    run_vagrant_command(test_file_exists(TestApp.shared_path.join(file)))
  end
end
    
            if Rake::Task.task_defined?('deploy:set_current_revision')
          before 'deploy:set_current_revision',
                 '#{scm_name}:set_current_revision'
        end
      end
      # rubocop:enable Style/GuardClause
    
            def fetch(key)
          @properties[key]
        end
    
          # Keys that have been set, but which have never been fetched.
      def unused_keys
        keys - fetched_keys
      end
    
        def html_output_for(script_url, code)
      code = CGI.escapeHTML code
      <<-HTML
<div><script src='#{script_url}'></script>
<noscript><pre><code>#{code}</code></pre></noscript></div>
      HTML
    end
    
            Dir.chdir(includes_dir) do
          choices = Dir['**/*'].reject { |x| File.symlink?(x) }
          if choices.include?(file)
            source = File.read(file)
            partial = Liquid::Template.parse(source)
            context.stack do
              rtn = rtn + partial.render(context)
            end
          else
            rtn = rtn + 'Included file '#{file}' not found in _includes directory'
          end
        end
      end
      rtn
    end
  end
    
        def render(context)
      file_dir = (context.registers[:site].source || 'source')
      file_path = Pathname.new(file_dir).expand_path
      file = file_path + @file
    
      class VideoTag < Liquid::Tag
    @video = nil
    @poster = ''
    @height = ''
    @width = ''
    
            def show
          authorize! :read, @order, order_token
          @address = find_address
          respond_with(@address)
        end
    
            def fire
          inventory_unit.send('#{@event}!') if @event
        end
    
            def update
          if @property
            authorize! :update, @property
            @property.update_attributes(property_params)
            respond_with(@property, status: 200, default_template: :show)
          else
            invalid_resource!(@property)
          end
        end
    
            def update
          @shipment = Spree::Shipment.accessible_by(current_ability, :update).readonly(false).find_by!(number: params[:id])
          @shipment.update_attributes_and_order(shipment_params)
    
            def create
          authorize! :create, StockLocation
          @stock_location = StockLocation.new(stock_location_params)
          if @stock_location.save
            respond_with(@stock_location, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_location)
          end
        end