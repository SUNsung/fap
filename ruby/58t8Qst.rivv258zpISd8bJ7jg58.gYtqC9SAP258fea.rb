
        
          def worker_class
    ProofProvider::Keybase::Worker
  end
    
        # In case for some reason we didn't have a redirect for the profile already, set it
    origin_account.update(moved_to_account: target_account) if origin_account.moved_to_account_id.nil?
    
          it 'ensures recipient is not following sender' do
        expect(recipient.following?(sender)).to be false
      end
    end
  end
    
    run SinatraStaticServer

    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
    Liquid::Template.register_tag('include_array', Jekyll::IncludeArrayTag)

    
    module Jekyll
    
    