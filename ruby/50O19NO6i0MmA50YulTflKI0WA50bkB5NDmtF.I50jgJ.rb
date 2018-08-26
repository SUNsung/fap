
        
        require 'benchmark/ips'
require 'jekyll'
require 'json'
    
          # Run Site#process and catch errors
      #
      # site - the Jekyll::Site object
      #
      # Returns nothing
      def process_site(site)
        site.process
      rescue Jekyll::Errors::FatalException => e
        Jekyll.logger.error 'ERROR:', 'YOUR SITE COULD NOT BE BUILT:'
        Jekyll.logger.error '', '------------------------------------'
        Jekyll.logger.error '', e.message
        exit(1)
      end
    
          it 'notifies the poster on reply' do
        expect {
          reply = Fabricate(:basic_reply, user: coding_horror, topic: post.topic)
          process_alerts(reply)
        }.to change(post.user.notifications, :count).by(1)
      end