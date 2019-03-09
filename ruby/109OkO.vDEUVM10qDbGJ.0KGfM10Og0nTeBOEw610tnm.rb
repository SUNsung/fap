
        
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

    
          it 'should remove participation' do
        delete :destroy, params: {post_id: post.id}
        expect(alice.participations.where(:target_id => post.id)).not_to exist
        expect(response.code).to eq('200')
      end
    end
    
            expect {
          get :create, params: invalid_params.merge(invite: {token: code.token})
        }.not_to change { code.reload.count }
      end
    
            it 'reshares the absolute root' do
          post_request!
          expect(@post.reshares.count).to eq(0)
          expect(@root.reshares.count).to eq(2)
        end
      end
    end
  end
    
    post '/msg' do
  SinatraWorker.perform_async params[:msg]
  redirect to('/')
end
    
            begin
          File.open(fp.path, 'a') { |tmpfp| fp.reopen(tmpfp) }
          fp.sync = true
          nr += 1
        rescue IOError, Errno::EBADF
          # not much we can do...
        end
      end
      nr
    rescue RuntimeError => ex
      # RuntimeError: ObjectSpace is disabled; each_object will only work with Class, pass -X+O to enable
      puts 'Unable to reopen logs: #{ex.message}'
    end
    
          def prepend(klass, *args)
        remove(klass) if exists?(klass)
        entries.insert(0, Entry.new(klass, *args))
      end
    
          def fake?
        self.__test_mode == :fake
      end