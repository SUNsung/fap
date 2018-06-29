      message = TestMailer.send_test(args[:to_address])
      Email::Sender.new(message, :test_message).send
    end
    
      def save_and_refresh_staff_groups!
    transaction do
      self.save!
      Group.refresh_automatic_groups!(:admins, :moderators, :staff)
    end
  end
    
          def stage_set?
        !!fetch(:stage, false)
      end
    
        # @abstract
    #
    # Update the clone on the deployment target
    #
    # @return void
    #
    def update
      raise NotImplementedError, 'Your SCM strategy module should provide a #update method'
    end
    
        it 'retrieves properties for multiple roles as a set' do
      rps = dsl.role_properties(:app, :web)
      expect(rps).to eq(Set[{ hostname: 'example3.com', role: :app }, { hostname: 'example1.com', role: :web, port: 80 }, { hostname: 'example2.com', role: :web, port: 81 }])
    end
    
    desc 'Clean out caches: .pygments-cache, .gist-cache, .sass-cache'
task :clean do
  rm_rf [Dir.glob('.pygments-cache/**'), Dir.glob('.gist-cache/**'), Dir.glob('.sass-cache/**'), 'source/stylesheets/screen.css']
end
    
      class VideoTag < Liquid::Tag
    @video = nil
    @poster = ''
    @height = ''
    @width = ''