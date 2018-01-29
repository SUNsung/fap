
        
                def apply_scope(scope, table, key, value)
          if scope.table == table
            scope.where!(key => value)
          else
            scope.where!(table.name => { key => value })
          end
        end
    
            @disable_request_forgery_protection = false
        @allow_same_origin_as_host = true
      end
    
    require 'abstract_unit'
    
              subscriptions.unsubscribe_from_all
          unsubscribe_from_internal_channel
    
              send(name, *args, &block)
        end
    end
    
      s.license = 'MIT'
    
        def schemes=(schemes)
      @schemes = schemes ? schemes.compact : nil
    end
    
          it 'raises an exception when xcode project path wasn't found' do
        expect do
          Fastlane::FastFile.new.parse('lane :test do
            increment_version_number(xcodeproj: '/nothere')
          end').runner.execute(:test)
        end.to raise_error('Could not find Xcode project')
      end
    
          { :title => 'Event', :entries => present_hash(payload) }
    else
      { :title => payload.to_s, :entries => [] }
    end
  end
    
        validate :validate_evernote_options
    
        respond_to do |format|
      format.html { redirect_to jobs_path, notice: 'All jobs removed.' }
      format.json { head :no_content }
    end
  end
    
    Note that you will likely need to have opened the app at least
once for any login items to be present.