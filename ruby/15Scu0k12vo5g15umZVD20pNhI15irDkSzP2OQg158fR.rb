
        
              def key?(key)
        (key != 'posts' && @obj.collections.key?(key)) || super
      end
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
    def native_relative
  DOC_PATH.sub('#{COL_PATH}/', '')
end
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
        before do
      module RuboCop
        module AST
          class Node
            # Let's make our predicate matchers read better
            def used?
              value_used?
            end
          end
        end
      end
    end
    
              if node.blockarg_type?
            correct_for_blockarg_type(node)
          else
            lambda do |corrector|
              variable_name = if node.optarg_type?
                                node.node_parts[0]
                              else
                                # Extract only a var name without splat (`*`)
                                node.source.gsub(/\A\*+/, '')
                              end
              corrector.replace(node.loc.name, '_#{variable_name}')
            end
          end
        end
    
            def heredoc_node?(node)
          node.respond_to?(:heredoc?) && node.heredoc?
        end
    
            def self.autocorrect_incompatible_with
          [Layout::HeredocArgumentClosingParenthesis]
        end
    
      it 'does not register offense when guard clause is before `elsif`' do
    expect_no_offenses(<<~RUBY)
      def foo
        if cond
          return another_object if something_different?
        elsif
          bar
        end
      end
    RUBY
  end
    
      it 'can scroll the scroll the scrolling element by a specific amount' do
    scrolling_element = @session.find(:css, '#scrollable')
    scrolling_element.scroll_to 100, 100
    scrolling_element.scroll_to(:current, offset: [-50, 50])
    expect(scrolling_element.evaluate_script('[this.scrollLeft, this.scrollTop]')).to eq [50, 150]
  end
end

    
          it 'clicks on approximately matching button' do
        @session.visit('/form')
        @session.click_link_or_button('awe', exact: false)
        expect(extract_results(@session)['first_name']).to eq('John')
      end
    end
    
    Capybara::SpecHelper.spec '#assert_no_current_path?' do
  before do
    @session.visit('/with_js')
  end
    
      it 'should be true if the page has the given current path' do
    expect(@session).to have_current_path('/with_js')
  end
    
          def default_visibility(fallback = Capybara.ignore_hidden_elements, options = {})
        vis = if @default_visibility&.respond_to?(:call)
          @default_visibility.call(options)
        else
          @default_visibility
        end
        vis.nil? ? fallback : vis
      end
    
    Then /^I should see a fieldset titled '([^']*)'$/ do |title|
  expect(page).to have_css 'fieldset legend', text: title
end
    
        # Register a new view key with the view factory
    #
    # eg:
    #
    #   factory = AbstractViewFactory.new
    #   factory.register my_view: SomeViewClass
    #
    # You can setup many at the same time:
    #
    #   factory.register  my_view: SomeClass,
    #                     another_view: OtherViewClass
    #
    def register(view_hash)
      self.class.register view_hash
    end
    
        class NormalizedMatcher
    
        def self.controllers_for_filters
      [SessionsController, PasswordsController, UnlocksController,
        RegistrationsController, ConfirmationsController
      ]
    end
    
        def self.klass(type)
      klass = '#{type.to_s.camelcase}Setting'
      raise ArgumentError, 'Unknown type: #{type}' unless ActiveAdmin.const_defined?(klass)
      ActiveAdmin.const_get(klass)
    end