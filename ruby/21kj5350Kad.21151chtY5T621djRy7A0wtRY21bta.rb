
        
                    # Prepend a hidden field to make sure something will be sent back to the
            # server if all radio buttons are unchecked.
            if options.fetch('include_hidden', true)
              hidden_field + rendered_collection
            else
              rendered_collection
            end
          end
    
            def render
          options = @options.stringify_keys
          options['size'] = options['maxlength'] unless options.key?('size')
          options['type'] ||= field_type
          options['value'] = options.fetch('value') { value_before_type_cast } unless field_type == 'file'
          add_default_name_and_id(options)
          tag('input', options)
        end
    
          # This module is mixed in if layout conditions are provided. This means
      # that if no layout conditions are used, this method is not used
      module LayoutConditions # :nodoc:
        private
    
          def typecast(paths)
        paths.map do |path|
          case path
          when Pathname, String
            OptimizedFileSystemResolver.new path.to_s
          else
            path
          end
        end
      end
  end
end

    
    def converted_history(markdown)
  remove_head_from_history(
    custom_release_header_anchors(
      liquid_escape(
        linkify(
          normalize_bullets(markdown)
        )
      )
    )
  )
end
    
    def global_require
  JSON.pretty_generate(DATA)
end
    
    require 'benchmark/ips'
require 'pathutil'
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
        # Private: The list of parent directories of a given file
    #
    # Returns an Array with the directory paths
    def parent_dirs(file)
      parent_dir = File.dirname(file)
      if parent_dir == site.dest
        []
      else
        [parent_dir] + parent_dirs(parent_dir)
      end
    end
    
            msg = ' Please append `--trace` to the `#{cmd.name}` command '
        dashes = '-' * msg.length
        Jekyll.logger.error '', dashes
        Jekyll.logger.error 'Jekyll #{Jekyll::VERSION} ', msg
        Jekyll.logger.error '', ' for any additional information or backtrace. '
        Jekyll.logger.abort_with '', dashes
      end
      # rubocop: enable RescueException
    end
  end
end

    
          it 'updates an existing user' do
        visit edit_admin_user_path(users(:bob))
        check 'Admin'
        click_on 'Update User'
        expect(page).to have_text('User 'bob' was successfully updated.')
        visit edit_admin_user_path(users(:bob))
        expect(page).to have_checked_field('Admin')
      end
    
        it 'shows the dry run pop up with previous events and allows use previously received event' do
      emitter.events << Event.new(payload: {url: 'http://xkcd.com/'})
      agent.sources << emitter
      agent.options.merge!('url' => '', 'url_from_event' => '{{url}}')
      agent.save!
    
      describe '#scenario_label' do
    it 'creates a scenario label with the scenario name' do
      expect(scenario_label(scenario)).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Scene</span>'
      )
    end
    
              expect(trigger_agent.name).to eq('listen for weather')
          expect(trigger_agent.sources).to eq([weather_agent])
          expect(trigger_agent.schedule).to be_nil
          expect(trigger_agent.keep_events_for).to eq(0)
          expect(trigger_agent.propagate_immediately).to be_truthy
          expect(trigger_agent).not_to be_disabled
          expect(trigger_agent.memory).to be_empty
          expect(trigger_agent.options).to eq(trigger_agent_options)
        end
    
      # Number of authentication tries before locking an account
  mattr_accessor :maximum_attempts
  @@maximum_attempts = 20
    
        def redirect_url
      if warden_message == :timeout
        flash[:timedout] = true if is_flashing_format?
    
      def create
    @filter = current_account.custom_filters.build(resource_params)
    
      def show
    render json: collection_presenter,
           serializer: ActivityPub::CollectionSerializer,
           adapter: ActivityPub::Adapter,
           content_type: 'application/activity+json',
           skip_activities: true
  end
    
        @statuses = @account.statuses.permitted_for(@account, signed_request_account)
    @statuses = params[:min_id].present? ? @statuses.paginate_by_min_id(LIMIT, params[:min_id]).reverse : @statuses.paginate_by_max_id(LIMIT, params[:max_id])
    @statuses = cache_collection(@statuses, Status)
  end
    
      def lease_seconds_or_default
    (params['hub.lease_seconds'] || 1.day).to_i.seconds
  end
    
          it 'displays Float::INFINITY as Inf' do
        format('%f', Float::INFINITY).should == 'Inf'
        format('%f', -Float::INFINITY).should == '-Inf'
      end
    
      it 'accepts a Rational' do
    sleep(Rational(1, 9)).should be_close(0, 2)
  end
    
      it 'transfers control to the innermost catch block waiting for the same sympol' do
    one = two = three = 0
    catch :duplicate do
      catch :duplicate do
        catch :duplicate do
          one = 1
          throw :duplicate
        end
        two = 2
        throw :duplicate
      end
      three = 3
      throw :duplicate
    end
    [one, two, three].should == [1, 2, 3]
  end
    
    describe 'main#define_method' do
  before :each do
    @code = 'define_method(:boom) { :bam }'
  end
    
        remove_duplicates
    remove_index :share_visibilities, name: :shareable_and_user_id
    add_index :share_visibilities, %i(shareable_id shareable_type user_id), name: :shareable_and_user_id, unique: true
    
        reversible(&method(:up_down))
  end
    
    When /^I (?:sign|log) in manually as '([^']*)' with password '([^']*)'( on the mobile website)?$/ \
do |username, password, mobile|
  @me = User.find_by_username(username)
  @me.password ||= password
  manual_login
  confirm_login mobile
end
    
    Then /^I should see an image in the publisher$/ do
  photo_in_publisher.should be_present
end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have value #{expected.inspect} but was #{actual.value.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have value #{expected.inspect} but it had'
  end
end
    
    describe ContactsController, :type => :controller do
  describe '#index' do
    before do
      AppConfig.chat.enabled = true
      @aspect = bob.aspects.create(:name => 'another aspect')
      bob.share_with alice.person, @aspect
      bob.share_with eve.person, @aspect
      sign_in bob, scope: :user
    end
    
        it 'generates a jasmine fixture', :fixture => true do
      get :bookmarklet
      save_fixture(html_for('body'), 'bookmarklet')
    end
    
      gem.add_development_dependency 'danger'
  gem.add_development_dependency 'mocha'
  gem.add_development_dependency 'rspec'
  gem.add_development_dependency 'rubocop', '0.48.1'
end

    
      def safely_remove_file(_path)
    run_vagrant_command('rm #{test_file}')
  rescue
    VagrantHelpers::VagrantSSHCommandError
  end
end
    
          # rubocop:disable Security/MarshalLoad
      def add_role(role, hosts, options={})
        options_deepcopy = Marshal.dump(options.merge(roles: role))
        Array(hosts).each { |host| add_host(host, Marshal.load(options_deepcopy)) }
      end
      # rubocop:enable Security/MarshalLoad