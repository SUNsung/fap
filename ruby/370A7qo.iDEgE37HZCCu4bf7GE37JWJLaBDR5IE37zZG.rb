
        
              # there might be more information available in the exception
      if message_template == :email_reject_invalid_post && e.message.size > 6
        message_template = :email_reject_invalid_post_specified
        template_args[:post_error] = e.message
      end
    
        # doing this as early as possible so we have an
    # accurate counter
    if queue_start = env['HTTP_X_REQUEST_START']
      queue_start = queue_start.split('t=')[1].to_f
      queue_time = (Time.now.to_f - queue_start)
      env['REQUEST_QUEUE_SECONDS'] = queue_time
    end
    
          expect(ApplicationRequest.page_view_anon.first.count).to eq(2)
      expect(ApplicationRequest.page_view_crawler.first.count).to eq(1)
      expect(ApplicationRequest.page_view_anon_mobile.first.count).to eq(1)
    
        after do
      DiscoursePluginRegistry.reset!
      LocaleSiteSetting.reset!
    end
    
            post '/admin/groups.json', params: params
    
              s3_helper.expects(:s3_bucket).returns(s3_bucket).at_least_once
          s3_bucket.expects(:object).with('uploads/default/original/1X/#{upload.sha1}.png').returns(s3_object)
          s3_object.expects(:acl).returns(s3_object)
          s3_object.expects(:put).with(acl: 'private').returns(s3_object)
    
        # The path used after confirmation.
    def after_confirmation_path_for(resource_name, resource)
      if signed_in?(resource_name)
        signed_in_root_path(resource)
      else
        new_session_path(resource_name)
      end
    end
    
          def extract_path_from_location(location)
        uri = parse_uri(location)
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
          def devise_mapping
        @devise_mapping ||= Devise.mappings[scope_name]
      end
    
    module RuboCop
  module Cop
    module Layout
      # This cop checks for the placement of the closing parenthesis
      # in a method call that passes a HEREDOC string as an argument.
      # It should be placed at the end of the line containing the
      # opening HEREDOC tag.
      #
      # @example
      #   # bad
      #
      #      foo(<<-SQL
      #        bar
      #      SQL
      #      )
      #
      #      foo(<<-SQL, 123, <<-NOSQL,
      #        bar
      #      SQL
      #        baz
      #      NOSQL
      #      )
      #
      #      foo(
      #        bar(<<-SQL
      #          baz
      #        SQL
      #        ),
      #        123,
      #      )
      #
      #   # good
      #
      #      foo(<<-SQL)
      #        bar
      #      SQL
      #
      #      foo(<<-SQL, 123, <<-NOSQL)
      #        bar
      #      SQL
      #        baz
      #      NOSQL
      #
      #      foo(
      #        bar(<<-SQL),
      #          baz
      #        SQL
      #        123,
      #      )
      #
      class HeredocArgumentClosingParenthesis < Cop
        include RangeHelp
    
            def avoid_autocorrect?(args)
          args.last.hash_type? && args.last.braces? &&
            braces_will_be_removed?(args)
        end
    
      it 'does not hang SpaceAfterPunctuation and SpaceInsideParens' do
    create_file('example.rb', 'some_method(a, )')
    Timeout.timeout(10) do
      expect(cli.run(%w[--auto-correct])).to eq(0)
    end
    expect($stderr.string).to eq('')
    expect(IO.read('example.rb')).to eq(<<~RUBY)
      # frozen_string_literal: true
    
        context 'outside a class' do
      it 'doesn't register an offense if a method is defined' do
        expect_no_offenses(<<~RUBY)
          class << A
            #{modifier}
            define_method(:method1) do
            end
          end
        RUBY
      end
    
        context 'with EnforcedStyle: require_for_equality_operators_only' do
      let(:cop_config) do
        { 'EnforcedStyle' => 'require_for_equality_operators_only' }
      end
    
          # Checks whether this `block` literal belongs to a lambda.
      #
      # @return [Boolean] whether the `block` literal belongs to a lambda
      def lambda?
        send_node.method?(:lambda)
      end
    
          # Checks whether this node body is a void context.
      # Always `true` for `for`.
      #
      # @return [true] whether the `for` node body is a void context
      def void_context?
        true
      end
    
    
    {      # Checks whether the `hash` literal is delimited by curly braces.
      #
      # @return [Boolean] whether the `hash` literal is enclosed in braces
      def braces?
        loc.end&.is?('}')
      end
    end
  end
end

    
      it 'should be true if the given selector matches the element' do
    expect(@element.assert_matches_selector(:css, '.number')).to be true
  end
    
        it 'should find disabled buttons when :all' do
      expect(@session.find_button('Disabled button', disabled: :all).value).to eq('Disabled button')
    end
  end
    
    Capybara::SpecHelper.spec '#find_by_id' do
  before do
    @session.visit('/with_html')
  end
    
        it 'doesn't find a download link if download is false' do
      expect { @session.find_link('Download Me', download: false) }.to raise_error Capybara::ElementNotFound
    end
    
    Rake::TestTask.new do |test|
  test.verbose = true
  test.libs << 'test'
  test.libs << 'lib'
  test.test_files = FileList['test/**/*_test.rb']
end
    
          def self.each(offset = 0, limit = self.count, queue = :failed, class_name = nil, order = 'desc')
        items = all(offset, limit, queue)
        items = [items] unless items.is_a? Array
        reversed = false
        if order.eql? 'desc'
          items.reverse!
          reversed = true
        end
        items.each_with_index do |item, i|
          if !class_name || (item['payload'] && item['payload']['class'] == class_name)
            id = reversed ? (items.length - 1) + (offset - i) : offset + i
            yield id, item
          end
        end
      end
    
      if !defined?(RUBY_ENGINE) || RUBY_ENGINE != 'jruby'
    it 'old signal handling just kills off the child' do
      _worker_pid, child_pid, result = start_worker(0, false)
      assert_nil result
      assert_child_not_running child_pid
    end