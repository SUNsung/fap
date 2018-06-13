
        
            def set_account
      @account = Account.find(params[:id])
    end
    
        if test_conf['database']&.present?
      ActiveRecord::Base.establish_connection(:test)
      yield
      ActiveRecord::Base.establish_connection(Rails.env.to_sym)
    end
  end
    
        it 'tracks when sign in is nil' do
      user.update(current_sign_in_at: nil)
      sign_in user, scope: :user
      get :show
    
      SPREE_GEMS.each do |gem_name|
    rm_f  '#{gem_name}/Gemfile.lock'
    rm_rf '#{gem_name}/pkg'
    rm_rf '#{gem_name}/spec/dummy'
  end
end
    
            MULTIPLE_LEFT_HAND_SIDE_TYPE = :mlhs
    
            def on_block(node)
          on_body_of_reduce(node) do |body|
            void_next = body.each_node(:next).find do |n|
              n.children.empty? && parent_block_node(n) == node
            end