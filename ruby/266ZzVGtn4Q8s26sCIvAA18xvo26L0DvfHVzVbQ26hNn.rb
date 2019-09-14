
        
            # In case for some reason we didn't have a redirect for the profile already, set it
    origin_account.update(moved_to_account: target_account) if origin_account.moved_to_account_id.nil?
    
    RSpec.describe NotifyService, type: :service do
  subject do
    -> { described_class.new.call(recipient, activity) }
  end
    
      let(:user)   { Fabricate(:user, account: Fabricate(:account, username: 'alice')) }
  let(:scopes) { 'read:statuses' }
  let(:token)  { Fabricate(:accessible_access_token, resource_owner_id: user.id, scopes: scopes) }
    
      def run_vagrant_command(command)
    stdout, stderr, status = vagrant_cli_command('ssh -c #{command.inspect}')
    return [stdout, stderr] if status.success?
    raise VagrantSSHCommandError, status
  end
end
    
          # Returns an array of source file location(s) where the given key was
      # assigned (i.e. where `set` was called). If the key was never assigned,
      # returns `nil`.
      def source_locations(key)
        locations[key]
      end
    
            it 'is true only for the condition' do
          expect(node.condition.used?).to be(true)
          expect(node.if_branch.used?).to be(false)
          expect(node.else_branch.used?).to be(false)
        end
      end
    end
    
      describe '#identifier' do
    let(:source) do
      'module Foo; end'
    end
    
                if external_trailing_comma?(node)
              fix_external_trailing_comma(node, corrector)
            end
          end
        end
    
          context 'with a node which meets all requirements of []' do
        let(:ruby) { ''abc'' }
    
    module RuboCop
  # Provides functionality for caching rubocop runs.
  class ResultCache
    NON_CHANGING = %i[color format formatters out debug fail_level auto_correct
                      cache fail_fast stdin parallel].freeze
    
      it 'registers an offense for guard clause followed by empty line' \
     'when guard clause including heredoc' do
    expect_no_offenses(<<~RUBY)
      def method
        if truthy
          raise <<-MSG
            This is an error.
          MSG
        end
    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end
    
          def field_container(model, method, options = {}, &block)
        css_classes = options[:class].to_a
        css_classes << 'field'
        css_classes << 'withError' if error_message_on(model, method).present?
        content_tag(
          :div, capture(&block),
          options.merge(class: css_classes.join(' '), id: '#{model}_#{method}_field')
        )
      end
    
        # returns the formatted price for the specified variant as a difference from product price
    def variant_price_diff(variant)
      variant_amount = variant.amount_in(current_currency)
      product_amount = variant.product.amount_in(current_currency)
      return if variant_amount == product_amount || product_amount.nil?
    
            if requires_authentication? && api_key.blank? && order_token.blank?
          must_specify_api_key and return
        elsif order_token.blank? && (requires_authentication? || api_key.present?)
          invalid_api_key and return
        else
          # An anonymous user
          @current_api_user = Spree.user_class.new
        end
      end
    
              if @address.update(address_params)
            respond_with(@address, default_template: :show)
          else
            invalid_resource!(@address)
          end
        end
    
              inventory_unit.transaction do
            if inventory_unit.update(inventory_unit_params)
              fire
              render :show, status: 200
            else
              invalid_resource!(inventory_unit)
            end
          end
        end
    
            def create
          authorize! :create, Spree::OptionType
          @option_type = Spree::OptionType.new(option_type_params)
          if @option_type.save
            render :show, status: 201
          else
            invalid_resource!(@option_type)
          end
        end
    
            def order
          @order ||= Spree::Order.find_by!(number: order_id)
          authorize! :show, @order
        end
    
              Spree::Dependencies.cart_remove_item_service.constantize.call(order: @shipment.order,
                                                                        variant: variant,
                                                                        quantity: quantity,
                                                                        options: { shipment: @shipment })
    
            def scope
          if params[:country_id]
            @country = Country.accessible_by(current_ability, :show).find(params[:country_id])
            @country.states.accessible_by(current_ability).order('name ASC')
          else
            State.accessible_by(current_ability).order('name ASC')
          end
        end
      end
    end
  end
end

    
            def show
          @stock_item = scope.find(params[:id])
          respond_with(@stock_item)
        end
    
          # Create an Atom-feed for each index.
      feed = CategoryFeed.new(self, self.source, category_dir, category)
      feed.render(self.layouts, site_payload)
      feed.write(self.dest)
      # Record the fact that this page has been added, otherwise Site::cleanup will remove it.
      self.pages << feed
    end
    
        def initialize(tag_name, markup, tokens)
      attributes = ['class', 'src', 'width', 'height', 'title']
    
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