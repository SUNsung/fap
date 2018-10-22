
        
                    if html_options['multiple'] && options.fetch(:include_hidden, true)
              tag('input', disabled: html_options['disabled'], name: html_options['name'], type: 'hidden', value: '') + select
            else
              select
            end
          end
    
              add_default_name_and_id_for_value(tag_value, name_and_id)
          options.delete('index')
          options.delete('namespace')
          options['for'] = name_and_id['id'] unless options.key?('for')
    
          if require_layout && action_has_layout? && !value
        raise ArgumentError,
          'There was no default layout for #{self.class} in #{view_paths.inspect}'
      end
    
        def find_all(path, prefixes = [], *args)
      _find_all path, prefixes, args, false
    end
    
          def instrument(name, **options) # :doc:
        options[:identifier] ||= (@template && @template.identifier) || @path
    
      smoke_user = User.seed do |u|
    u.id = 0
    u.name = 'smoke_user'
    u.username = 'smoke_user'
    u.username_lower = 'smoke_user'
    u.password = 'P4ssw0rd'
    u.active = true
    u.approved = true
    u.approved_at = Time.now
    u.trust_level = TrustLevel[3]
  end.first
    
          it 'raises TypeError if passed not Integer' do
        -> { warn '', uplevel: '' }.should raise_error(TypeError)
        -> { warn '', uplevel: [] }.should raise_error(TypeError)
        -> { warn '', uplevel: {} }.should raise_error(TypeError)
        -> { warn '', uplevel: Object.new }.should raise_error(TypeError)
      end
    end
  end
end

    
      def up_down(change)
    change.up do
      Mention.update_all(mentions_container_type: 'Post')
      change_column :mentions, :mentions_container_type, :string, null: false
      Notification.where(type: 'Notifications::Mentioned').update_all(type: 'Notifications::MentionedInPost')
    end
    
    Then /^'([^']*)' should be post (\d+)$/ do |post_text, position|
  stream_element_numbers_content(position).should have_content(post_text)
end
    
    When /^I click the sign in button$/ do
  click_link 'Sign in'
end
    
      def navigate_to(page_name)
    path = path_to(page_name)
    if path.is_a?(Hash)
      visit(path[:path])
      await_elem = path[:special_elem]
      find(await_elem.delete(:selector), await_elem)
    else
      visit(path)
    end
  end
    
      # fill change password section on the user edit page
  def fill_change_password_section(cur_pass, new_pass, confirm_pass)
    fill_in 'user_current_password', :with => cur_pass
    fill_in 'user_password', :with => new_pass
    fill_in 'user_password_confirmation', :with => confirm_pass
  end
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
        # Returns a new {Installer} parametrized from the {Config}.
    #
    # @return [Installer]
    #
    def installer_for_config
      Installer.new(config.sandbox, config.podfile, config.lockfile)
    end
    
      def test_file_exists(path)
    exists?('f', path)
  end
    
        def any?(key)
      value = fetch(key)
      if value && value.respond_to?(:any?)
        begin
          return value.any?
        rescue ArgumentError # rubocop:disable Lint/HandleExceptions
          # Gracefully ignore values whose `any?` method doesn't accept 0 args
        end
      end
    
          def remember_location(key)
        location = caller.find do |line|
          IGNORED_LOCATIONS.none? { |i| line.include?(i) }
        end
        (locations[key] ||= []) << location
      end
    
    module RuboCop
  module Cop
    module Style
      # This cop checks for braces around the last parameter in a method call
      # if the last parameter is a hash.
      # It supports `braces`, `no_braces` and `context_dependent` styles.
      #
      # @example EnforcedStyle: braces
      #   # The `braces` style enforces braces around all method
      #   # parameters that are hashes.
      #
      #   # bad
      #   some_method(x, y, a: 1, b: 2)
      #
      #   # good
      #   some_method(x, y, {a: 1, b: 2})
      #
      # @example EnforcedStyle: no_braces (default)
      #   # The `no_braces` style checks that the last parameter doesn't
      #   # have braces around it.
      #
      #   # bad
      #   some_method(x, y, {a: 1, b: 2})
      #
      #   # good
      #   some_method(x, y, a: 1, b: 2)
      #
      # @example EnforcedStyle: context_dependent
      #   # The `context_dependent` style checks that the last parameter
      #   # doesn't have braces around it, but requires braces if the
      #   # second to last parameter is also a hash literal.
      #
      #   # bad
      #   some_method(x, y, {a: 1, b: 2})
      #   some_method(x, y, {a: 1, b: 2}, a: 1, b: 2)
      #
      #   # good
      #   some_method(x, y, a: 1, b: 2)
      #   some_method(x, y, {a: 1, b: 2}, {a: 1, b: 2})
      class BracesAroundHashParameters < Cop
        include ConfigurableEnforcedStyle
        include RangeHelp
    
          # Custom destructuring method. This can be used to normalize
      # destructuring for different variations of the node.
      #
      # In this case, the `def` node destructures into:
      #
      #   `method_name, arguments, body`
      #
      # while the `defs` node destructures into:
      #
      #   `receiver, method_name, arguments, body`
      #
      # so we reverse the destructured array to get the optional receiver
      # at the end, where it can be discarded.
      #
      # @return [Array] the different parts of the `def` or `defs` node
      def node_parts
        to_a.reverse
      end
    end
  end
end

    
          # Returns an array of all the values in the `hash` literal.
      #
      # @return [Array<Node>] an array of values in the `hash` literal
      def values
        each_pair.map(&:value)
      end
    
          DOUBLE_SPLAT = '**'.freeze
    
            def value_delta
          return 0 if first.same_line?(second)
          return 0 if keyword_splat?
    
            private
    
              @products = @products.distinct.page(params[:page]).per(params[:per_page])
          expires_in 15.minutes, public: true
          headers['Surrogate-Control'] = 'max-age=#{15.minutes}'
          respond_with(@products)
        end
    
            def scope
          if params[:country_id]
            @country = Country.accessible_by(current_ability, :read).find(params[:country_id])
            @country.states.accessible_by(current_ability, :read).order('name ASC')
          else
            State.accessible_by(current_ability, :read).order('name ASC')
          end
        end
      end
    end
  end
end

    
            def scope
          includes = { variant: [{ option_values: :option_type }, :product] }
          @stock_location.stock_items.accessible_by(current_ability, :read).includes(includes)
        end
    
            def show
          respond_with(stock_location)
        end