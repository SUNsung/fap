
        
          private
    
          expect(response).to redirect_to(settings_notifications_path)
      user.reload
      expect(user.settings['notification_emails']['follow']).to be true
      expect(user.settings['interactions']['must_be_follower']).to be false
    end
  end
end

    
          def to_s
        @pairs.inspect
      end
    end
  end
end

    
            opts.on('--cache-location PATH',
                'The path to save parsed Sass files. Defaults to .sass-cache.') do |loc|
          @options[:for_engine][:cache_location] = loc
        end