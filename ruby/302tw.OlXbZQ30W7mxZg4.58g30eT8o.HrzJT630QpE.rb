
        
        module AccountFinderConcern
  extend ActiveSupport::Concern
    
      def id
    object.id.to_s
  end
    
            expect_updated_sign_in_at(user)
        expect(Redis.current.zcard(FeedManager.instance.key(:home, user.account_id))).to eq 3
        expect(Redis.current.get('account:#{user.account_id}:regeneration')).to be_nil
      end
    end
    
          if path.extname == '.la'
        path.unlink
      elsif path.basename.to_s == 'perllocal.pod'
        # Both this file & the .packlist one below are completely unnecessary
        # to package & causes pointless conflict with other formulae. They are
        # removed by Debian, Arch & MacPorts amongst other packagers as well.
        # The files are created as part of installing any Perl module.
        path.unlink
      elsif path.basename.to_s == '.packlist' # Hidden file, not file extension!
        path.unlink
      else
        # Set permissions for executables and non-executables
        perms = if executable_path?(path)
          0555
        else
          0444
        end
        if ARGV.debug?
          old_perms = path.stat.mode & 0777
          if perms != old_perms
            puts 'Fixing #{path} permissions from #{old_perms.to_s(8)} to #{perms.to_s(8)}'
          end
        end
        path.chmod perms
      end
    end
  end
end
    
        it 'leaves normal params untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => 'bar'
      expect(body).to eq('bar')
    end