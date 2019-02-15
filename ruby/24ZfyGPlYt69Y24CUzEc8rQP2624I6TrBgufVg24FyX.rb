
        
          def remove_duplicates
    where = 'WHERE s1.user_id = s2.user_id AND s1.shareable_id = s2.shareable_id AND '\
      's1.shareable_type = s2.shareable_type AND s1.id > s2.id'
    if AppConfig.postgres?
      execute('DELETE FROM share_visibilities AS s1 USING share_visibilities AS s2 #{where}')
    else
      execute('DELETE s1 FROM share_visibilities s1, share_visibilities s2 #{where}')
    end
  end
end

    
      end
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end
    
        # Test page_header_from_content(@content)
    actual = @view.title
    assert_equal '1 & 2', actual
  end
    
    task :default => :test
    
          @CONF[:IRB_RC].call(irb.context) if @CONF[:IRB_RC]
      @CONF[:MAIN_CONTEXT] = irb.context
    
        def not_found(msg = nil)
      @message = msg || 'The requested page does not exist.'
      status 404
      return mustache :error
    end
    
        it_behaves_like 'returns 404 HTTP status'
  end
    
      shared_examples 'nested requested resources' do
    it 'are returned' do
      expect(json_response['included']).to be_present
      expect(json_response['included']).not_to include(have_type('variant').and have_id(default_variant.id.to_s))
      expect(json_response['included']).to include(have_type('option_type'))
      expect(json_response['included']).to include(have_type('option_value'))
    end
  end
    
          context 'with existing order' do
        it_behaves_like 'apply coupon code'
      end
    
        context 'as a guest user with token' do
      before { get '/api/v2/storefront/order_status/#{order.number}', headers: headers_order_token }
    
      shared_examples 'returns valid taxon resource JSON' do
    it 'returns a valid taxon resource JSON response' do
      expect(response.status).to eq(200)
    
              def resource_finder
            Spree::Api::Dependencies.storefront_completed_order_finder.constantize
          end
    
          private
    
    desc 'clean the whole repository by removing all the generated files'
task :clean do
  rm_f  'Gemfile.lock'
  rm_rf 'sandbox'
  rm_rf 'pkg'
    
              def find_spree_current_order
            Spree::Api::Dependencies.storefront_current_order_finder.constantize.new.execute(
              store: spree_current_store,
              user: spree_current_user,
              token: order_token,
              currency: current_currency
            )
          end