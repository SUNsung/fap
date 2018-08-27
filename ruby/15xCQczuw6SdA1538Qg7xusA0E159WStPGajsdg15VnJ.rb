
        
            You can read more about this change at:
      https://www.playframework.com/documentation/2.3.x/Migration23
      https://www.playframework.com/documentation/2.3.x/Highlights23
    EOS
  when 'haskell-platform' then <<-EOS.undent
    We no longer package haskell-platform. Consider installing ghc
    and cabal-install instead:
      brew install ghc cabal-install
    
      # True if a {Formula} is being built in 32-bit/x86 mode.
  # This is needed for some use-cases though we prefer to build Universal
  # when a 32-bit version is needed.
  def build_32_bit?
    include?('32-bit') && option_defined?('32-bit')
  end
    
      def plist_caveats
    s = []
    if f.plist || (keg && keg.plist_installed?)
      destination = if f.plist_startup
        '/Library/LaunchDaemons'
      else
        '~/Library/LaunchAgents'
      end
    
          # Find commands in Homebrew/dev-cmd
      if ARGV.homebrew_developer?
        puts
        puts 'Built-in development commands'
        puts_columns internal_development_commands
      end
    
        if ARGV.named.empty?
      slow_checks = %w[
        check_for_broken_symlinks
        check_missing_deps
        check_for_outdated_homebrew
        check_for_linked_keg_only_brews
      ]
      methods = (checks.all.sort - slow_checks) + slow_checks
    else
      methods = ARGV.named
    end
    
      class Mention < ApplicationRecord
  end
    
      count.times do
    person = FactoryGirl.create(:person)
    people << person
  end
    
      # create the default testing aspects for a given user
  def add_standard_aspects(user)
    user.aspects.create(:name => 'Besties')
    user.aspects.create(:name => 'Unicorns')
  end
    
        it 'generates a jasmine fixture', fixture: true do
      session[:mobile_view] = true
      get :new, format: :mobile
      save_fixture(html_for('body'), 'conversations_new_mobile')
    end
  end
end

    
    describe StatusMessagesController, :type => :controller do
  describe '#bookmarklet' do
    before do
      sign_in bob, scope: :user
    end
    
        it 'returns likes for a public post without login' do
      post = alice.post(:status_message, text: 'hey', public: true)
      bob.like!(post)
      sign_out :user
      get :index, params: {post_id: post.id}, format: :json
      expect(JSON.parse(response.body).map {|h| h['id'] }).to match_array(post.likes.map(&:id))
    end
    
        %w[iOS macOS].each do |platform|
        abstract_target '#{platform} Pods' do
            project '#{platform} Modules.xcodeproj'
    
            def scope
          @scope ||= if params[:option_type_id]
                       Spree::OptionType.find(params[:option_type_id]).option_values.accessible_by(current_ability, :read)
                     else
                       Spree::OptionValue.accessible_by(current_ability, :read).load
                     end
        end
    
            def create
          authorize! :create, ProductProperty
          @product_property = @product.product_properties.new(product_property_params)
          if @product_property.save
            respond_with(@product_property, status: 201, default_template: :show)
          else
            invalid_resource!(@product_property)
          end
        end
    
            def update
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :update).find(params[:id])
          if @return_authorization.update_attributes(return_authorization_params)
            respond_with(@return_authorization, default_template: :show)
          else
            invalid_resource!(@return_authorization)
          end
        end
    
              error =
            if @quantity < 0 && @target_shipment == @original_shipment
              '#{Spree.t(:negative_quantity, scope: 'api')}, \n#{Spree.t('wrong_shipment_target', scope: 'api')}'
            elsif @target_shipment == @original_shipment
              Spree.t(:wrong_shipment_target, scope: 'api')
            elsif @quantity < 0
              Spree.t(:negative_quantity, scope: 'api')
            end
    
            def scope
          includes = { variant: [{ option_values: :option_type }, :product] }
          @stock_location.stock_items.accessible_by(current_ability, :read).includes(includes)
        end
    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end
    
          # This method depends on the fact that we have guarded
      # against implicit and empty literals.
      def closing_brace_on_same_line?(node)
        node.loc.end.line == children(node).last.last_line
      end
    
          # Calls the given block for each `key` node in the `hash` literal.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_key
        return pairs.map(&:key).to_enum unless block_given?
    
    desc 'Start an IRB session with all necessary files required.'
task :shell do |t|
  chdir File.dirname(__FILE__)
  exec 'irb -I lib/ -I lib/paperclip -r rubygems -r active_record -r tempfile -r init'
end
    
        # resize to a new geometry
    # @param geometry [String] the Paperclip geometry definition to resize to
    # @example
    #   Paperclip::Geometry.new(150, 150).resize_to('50x50!')
    #   #=> Paperclip::Geometry(50, 50)
    def resize_to(geometry)
      new_geometry = Paperclip::Geometry.parse geometry
      case new_geometry.modifier
      when '!', '#'
        new_geometry
      when '>'
        if new_geometry.width >= self.width && new_geometry.height >= self.height
          self
        else
          scale_to new_geometry
        end
      when '<'
        if new_geometry.width <= self.width || new_geometry.height <= self.height
          self
        else
          scale_to new_geometry
        end
      else
        scale_to new_geometry
      end
    end