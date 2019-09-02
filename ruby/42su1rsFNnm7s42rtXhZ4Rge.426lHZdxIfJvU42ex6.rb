
        
          def test_pretty_print_with_non_primary_key_id_attribute
    topic = topics(:first).becomes(TitlePrimaryKeyTopic)
    actual = +''
    PP.pp(topic, StringIO.new(actual))
    assert_match(/id: 1/, actual)
  end
end

    
        initializer 'action_mailbox.config' do
      config.after_initialize do |app|
        ActionMailbox.logger = app.config.action_mailbox.logger || Rails.logger
        ActionMailbox.incinerate = app.config.action_mailbox.incinerate.nil? ? true : app.config.action_mailbox.incinerate
        ActionMailbox.incinerate_after = app.config.action_mailbox.incinerate_after || 30.days
        ActionMailbox.queues = app.config.action_mailbox.queues || {}
        ActionMailbox.ingress = app.config.action_mailbox.ingress
      end
    end
  end
end

    
            stderr = capture(:stderr) { run_rake_routes }
        assert_match(/DEPRECATION WARNING: Using `bin\/rake routes` is deprecated and will be removed in Rails 6.1/, stderr)
      end
    
      attr_accessor :user
    
    puts 'Bundler configured! Please run 'bin/bundle install' now.'

    
      def percent_change(today, yesterday)
    sprintf( '%0.02f', ((today-yesterday) / yesterday.to_f)*100).to_f
  end
    
          def process_authorization_consent(approved_string)
        endpoint = Api::OpenidConnect::AuthorizationPoint::EndpointConfirmationPoint.new(
          current_user, to_boolean(approved_string))
        handle_confirmation_endpoint_response(endpoint)
      end
    
          rescue_from OpenIDConnect::ValidationFailed,
                  ActiveRecord::RecordInvalid, Api::OpenidConnect::Error::InvalidSectorIdentifierUri do |e|
        validation_fail_as_json(e)
      end
    
        opts = params.require(:conversation).permit(:subject)
    opts[:participant_ids] = person_ids
    opts[:message] = { text: params[:conversation][:text] }
    @conversation = current_user.build_conversation(opts)
    
    World(VagrantHelpers)

    
          super
    end
    
          def response
        return @response if defined? @response
    
            if Rake::Task.task_defined?('deploy:check')
          before 'deploy:check', '#{scm_name}:check'
        end
    
          def add_property(key, value)
        if respond_to?('#{key}=')
          send('#{key}=', value)
        else
          set(key, value)
        end
      end
    
          class ValidatedQuestion < Question
        def initialize(validator)
          @validator = validator
        end
    
    # We use a special :_default_git value so that SCMResolver can tell whether the
# default has been replaced by the user via `set`.
set_if_empty :scm, Capistrano::Configuration::SCMResolver::DEFAULT_GIT
set_if_empty :branch, 'master'
set_if_empty :deploy_to, -> { '/var/www/#{fetch(:application)}' }
set_if_empty :tmp_dir, '/tmp'
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for trailing comma in argument lists.
      #
      # @example EnforcedStyleForMultiline: consistent_comma
      #   # bad
      #   method(1, 2,)
      #
      #   # good
      #   method(1, 2)
      #
      #   # good
      #   method(
      #     1, 2,
      #     3,
      #   )
      #
      #   # good
      #   method(
      #     1,
      #     2,
      #   )
      #
      # @example EnforcedStyleForMultiline: comma
      #   # bad
      #   method(1, 2,)
      #
      #   # good
      #   method(1, 2)
      #
      #   # good
      #   method(
      #     1,
      #     2,
      #   )
      #
      # @example EnforcedStyleForMultiline: no_comma (default)
      #   # bad
      #   method(1, 2,)
      #
      #   # good
      #   method(1, 2)
      #
      #   # good
      #   method(
      #     1,
      #     2
      #   )
      class TrailingCommaInArguments < Cop
        include TrailingComma
    
          it_behaves_like 'invalid'
    end
  end
    
      # Test blocks using both {} and do..end
  [%w[{ }], %w[do end]].each do |open, close|
    context 'when EnforcedStyle is no_empty_lines for #{open} #{close} block' do
      let(:cop_config) { { 'EnforcedStyle' => 'no_empty_lines' } }
    
      context 'when using ActiveSupport's `concerning` method' do
    let(:config) do
      RuboCop::Config.new(
        'Lint/UselessAccessModifier' => {
          'ContextCreatingMethods' => ['concerning']
        }
      )
    end
    
      context 'when a unreferenced variable is reassigned ' \
          'on the right side of && and referenced after the &&' do
    it 'accepts' do
      expect_no_offenses(<<~RUBY)
        def some_method
          foo = 1
          do_something_returns_object_or_nil && foo = 2
          foo
        end
      RUBY
    end
  end
    
          # Checks whether the `hash` node contains any `pair`- or `kwsplat` nodes.
      #
      # @return[Boolean] whether the `hash` is empty
      def empty?
        children.empty?
      end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift(int, shift)
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
        assert_equal 'http://example.org/foo/Home', last_response.headers['Location']
    
      test 'clean path with double leading slash' do
    assert_equal '/Mordor', clean_path('//Mordor')
  end
end
    
        get '/search' do
      @query   = params[:q] || ''
      wiki     = wiki_new
      # Sort wiki search results by count (desc) and then by name (asc)
      @results = wiki.search(@query).sort { |a, b| (a[:count] <=> b[:count]).nonzero? || b[:name] <=> a[:name] }.reverse
      @name    = @query
      mustache :search
    end
    
            fields = object.preferences.keys.map do |key|
          if object.has_preference?(key)
            form.label('preferred_#{key}', Spree.t(key) + ': ') +
              preference_field_for(form, 'preferred_#{key}', type: object.preference_type(key))
          end
        end
        safe_join(fields, '<br />'.html_safe)
      end
    
          # Takes the amount in cents to capture.
      # Can be used to capture partial amounts of a payment, and will create
      # a new pending payment record for the remaining amount to capture later.
      def capture!(amount = nil)
        return true if completed?
    
        private
    
          before do
        allow(return_item).to receive(:eligible_for_return?).and_return(true)
        subject
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
    
            def index
          @properties = Spree::Property.accessible_by(current_ability)