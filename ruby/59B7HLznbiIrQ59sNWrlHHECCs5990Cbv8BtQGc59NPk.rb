
        
            def test_migrations_can_handle_foreign_keys_to_specific_tables
      migration = RevertCustomForeignKeyTable.new
      InvertibleMigration.migrate(:up)
      migration.migrate(:up)
      migration.migrate(:down)
    end
    
      def test_indexes_in_create
    assert_called_with(
      ActiveRecord::Base.connection,
      :data_source_exists?,
      [:temp],
      returns: false
    ) do
      expected = /\ACREATE TEMPORARY TABLE `temp` \( INDEX `index_temp_on_zip`  \(`zip`\)\)(?: ROW_FORMAT=DYNAMIC)? AS SELECT id, name, zip FROM a_really_complicated_query/
      actual = ActiveRecord::Base.connection.create_table(:temp, temporary: true, as: 'SELECT id, name, zip FROM a_really_complicated_query') do |t|
        t.index :zip
      end
    
    module ApplicationTests
  module RakeTests
    class RakeRoutesTest < ActiveSupport::TestCase
      include ActiveSupport::Testing::Isolation
    
    module Docs
  class EntryIndex
    attr_reader :entries, :types
    
          def process_url?(url)
        base_urls.any? { |base_url| base_url.contains?(url) }
      end
    
          INDEX = Set.new
    
            # Remove root-level <div>
        while div = at_css('h1 + div')
          div.before(div.children)
          div.remove
        end
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
          # Forgets the given resource by deleting a cookie
      def forget_me(resource)
        scope = Devise::Mapping.find_scope!(resource)
        resource.forget_me!
        cookies.delete(remember_key(resource, scope), forget_cookie_values(resource))
      end
    
          protected
    
            context 'if the currency is different than the order's currency' do
          let(:currency) { 'GBP' }
    
            def destroy
          @option_type = Spree::OptionType.accessible_by(current_ability, :destroy).find(params[:id])
          @option_type.destroy
          render plain: nil, status: 204
        end
    
            def new
          @payment_methods = Spree::PaymentMethod.available
          respond_with(@payment_methods)
        end
    
            def return_authorization_params
          params.require(:return_authorization).permit(permitted_return_authorization_attributes)
        end
      end
    end
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
    
        obj = Helpers.new('HTTP_ACCEPT_LANGUAGE' => 'pt-PT,pt;q=0.8,en-US;q=0.6,en;q=0.4')
    assert_equal 'pt', obj.locale
    
          assert_equal set.sort_by { |job| -job.score }, set
    end
    
    describe 'Sidekiq::Testing' do
  describe 'require/load sidekiq/testing.rb' do
    before do
      require 'sidekiq/testing'
    end
    
        it 'finds jobs enqueued by client' do
      Sidekiq::Client.push(
        'class' => 'NonExistentWorker',
        'queue' => 'missing',
        'args' => [1]
      )
    
      # The CategoryIndex class creates a single category page for the specified category.
  class CategoryIndex < Page
    
      class GistTagNoCache < GistTag
    def initialize(tag_name, text, token)
      super
      @cache_disabled = true
    end
  end
end
    
      # Returns a title cased string based on John Gruber's title case http://daringfireball.net/2008/08/title_case_update
  def titlecase(input)
    input.titlecase
  end