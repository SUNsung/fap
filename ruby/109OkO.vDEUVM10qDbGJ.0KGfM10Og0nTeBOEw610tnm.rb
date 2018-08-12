
        
                expect(result).to eq('svn info | grep Revision | egrep -o '[0-9]+'')
        expect(Fastlane::Actions.lane_context[Fastlane::Actions::SharedValues::BUILD_NUMBER_REPOSITORY]).to eq('svn info | grep Revision | egrep -o '[0-9]+'')
      end
    end
    
    invalids = []
Parallel.each(links, in_threads: 4) do |link|
  href = link.attribute('href').to_s
  begin
    case check_link(URI.join(BASE_URI, href))
    when (200...300)
      putc('.')
    when (300..302)
      putc('w')
    end
  rescue => e
    putc('F')
    invalids << '#{href} (reason: #{e.message})'
  end
end
    
        if successfully_sent?(resource)
      respond_with({}, location: after_sending_unlock_instructions_path_for(resource))
    else
      respond_with(resource)
    end
  end
    
    module VagrantPlugins
  module CommandCap
    class Command < Vagrant.plugin('2', :command)
      def self.synopsis
        'checks and executes capability'
      end