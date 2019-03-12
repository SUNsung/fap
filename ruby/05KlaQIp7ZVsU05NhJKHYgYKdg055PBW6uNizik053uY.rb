
        
            def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
          # Sign out all active users or scopes. This helper is useful for signing out all roles
      # in one click. This signs out ALL scopes in warden. Returns true if there was at least one logout
      # and false if there was no user logged in on all scopes.
      def sign_out_all_scopes(lock=true)
        users = Devise.mappings.keys.map { |s| warden.user(scope: s, run_callbacks: false) }
    
        if last_request_at.is_a? Integer
      last_request_at = Time.at(last_request_at).utc
    elsif last_request_at.is_a? String
      last_request_at = Time.parse(last_request_at)
    end
    
          module ClassMethods
        # Create the cookie key using the record id and remember_token
        def serialize_into_cookie(record)
          [record.to_key, record.rememberable_value, Time.now.utc.to_f.to_s]
        end
    
            it 'does not use two's complement form for negative numbers for formats bBoxX' do
          format('%+b', -10).should == '-1010'
          format('%+B', -10).should == '-1010'
          format('%+o', -87).should == '-127'
          format('%+x', -196).should == '-c4'
          format('%+X', -196).should == '-C4'
        end
      end
    end
    
      it 'no raises error on fixnum values' do
    [1].each do |v|
      lambda { v.taint }.should_not raise_error(RuntimeError)
      v.tainted?.should == false
    end
  end
end
