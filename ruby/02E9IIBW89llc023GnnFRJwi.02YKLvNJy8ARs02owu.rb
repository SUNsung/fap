
        
          def save_and_refresh_staff_groups!
    transaction do
      self.save!
      Group.refresh_automatic_groups!(:admins, :moderators, :staff)
    end
  end
    
          # Resend confirmation token.
      # Regenerates the token if the period is expired.
      def resend_confirmation_instructions
        pending_any_confirmation do
          send_confirmation_instructions
        end
      end
    
    gem 'activemodel-serializers-xml', github: 'rails/activemodel-serializers-xml'
    
      devise_scope :user do
    get '/some/route' => 'some_devise_controller'
  end
    
          if(inp.attributes[ikey] =~ /^http/i)
        inp[ikey] = ''
        next
      end
    
    sitelist = ARGV.shift() || usage()
output   = ARGV.shift() || usage()
    
          when :login
        s[:user]=$1
        s[:pass]=$2
    
    
    {	if ln =~ /;(read|write)_(handle|filename)=/
		parts = ln.split(' ')
		if (parts[0] == 'mov')
			parts2 = parts[2].split('=')
			label = parts2[0]
			label.slice!(0,1)
			old = parts2[1]
			new = addrs[label]
			#puts '%32s: %s -> %x' % [label, old, new]
			replaces << [label, old, new.to_s(16)]
		end
	end
}
    
    		temp[1].each do |byte|
			self.block[-1][-1] << '\\x#{byte}'
			self.block_size += 1
		end
    
    module Capistrano
  module Doctor
    # Prints table of all Capistrano-related gems and their version numbers. If
    # there is a newer version of a gem available, call attention to it.
    class GemsDoctor
      include Capistrano::Doctor::OutputHelpers
    
            raise t('error.invalid_stage_name', name: invalid, path: stage_config_path.join('#{invalid}.rb'))
      end
    end
  end
end

    
        def exit_deploy_because_of_exception(ex)
      warn t(:deploy_failed, ex: ex.message)
      invoke 'deploy:failed'
      exit(false)
    end
    
          describe 'fetching servers by an array of roles' do
        subject { dsl.roles([:app]) }
    
      not_found do
    send_file(File.join(File.dirname(__FILE__), 'public', '404.html'), {:status => 404})
  end
    
    
  # Jekyll hook - the generate method is called by jekyll, and generates all of the category pages.
  class GenerateCategories < Generator
    safe true
    priority :low
    
    Liquid::Template.register_tag('config_tag', ConfigTag)
    
        def render(context)
      if parts = @text.match(/([a-zA-Z\d]*) (.*)/)
        gist, file = parts[1].strip, parts[2].strip
      else
        gist, file = @text.strip, ''
      end
      if gist.empty?
        ''
      else
        script_url = script_url_for gist, file
        code       = get_cached_gist(gist, file) || get_gist_from_web(gist, file)
        html_output_for script_url, code
      end
    end
    
      # Condenses multiple spaces and tabs into a single space
  def condense_spaces(input)
    input.gsub(/\s{2,}/, ' ')
  end