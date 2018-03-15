
        
            Or via the Cask:
      brew cask install ngrok
    EOS
  end
end

    
      # True if a {Formula} is being built with {Formula.head} instead of {Formula.stable}.
  # <pre>args << '--some-new-stuff' if build.head?</pre>
  # <pre># If there are multiple conditional arguments use a block instead of lines.
  #  if build.head?
  #    args << '--i-want-pizza'
  #    args << '--and-a-cold-beer' if build.with? 'cold-beer'
  #  end</pre>
  def head?
    include? 'HEAD'
  end
    
      def fish_completion_caveats
    if keg && keg.completion_installed?(:fish) && which('fish') then <<-EOS.undent
      fish completion has been installed to:
        #{HOMEBREW_PREFIX}/share/fish/vendor_completions.d
      EOS
    end
  end
    
        if $stdout.tty?
      metacharacters = %w[\\ | ( ) [ ] { } ^ $ * + ? .]
      bad_regex = metacharacters.any? do |char|
        ARGV.any? do |arg|
          arg.include?(char) && !arg.start_with?('/')
        end
      end
      if ARGV.any? && bad_regex
        ohai 'Did you mean to perform a regular expression search?'
        ohai 'Surround your query with /slashes/ to search by regex.'
      end
    end
    
      def cxxstdlib_check(check_type)
    self.class.cxxstdlib_check check_type
  end
    
          export JAVA_HOME='$(/usr/libexec/java_home)'
      export AWS_ACCESS_KEY='<Your AWS Access ID>'
      export AWS_SECRET_KEY='<Your AWS Secret Key>'
      export #{home_name}='#{home_value}'
    EOS
  end
end

    
      def confirm_user_by_token_with_confirmation_sent_at(confirmation_sent_at)
    user = create_user
    user.update_attribute(:confirmation_sent_at, confirmation_sent_at)
    confirmed_user = User.confirm_by_token(user.raw_confirmation_token)
    assert_equal confirmed_user, user
    user.reload.confirmed?
  end
    
      def failure_message
    exception = request.respond_to?(:get_header) ? request.get_header('omniauth.error') : request.env['omniauth.error']
    error   = exception.error_reason if exception.respond_to?(:error_reason)
    error ||= exception.error        if exception.respond_to?(:error)
    error ||= (request.respond_to?(:get_header) ? request.get_header('omniauth.error.type') : request.env['omniauth.error.type']).to_s
    error.to_s.humanize if error
  end
    
      # Gets the actual resource stored in the instance variable
  def resource
    instance_variable_get(:'@#{resource_name}')
  end
    
        def email_changed(record, opts={})
      devise_mail(record, :email_changed, opts)
    end
    
    DeviseCreateUsers.migrate(:up)
    
    ###
### methods
###
    
    unless ENV['BUNDLE_GEMFILE']
  require 'pathname'
    
    
# replace calls, jmps, and read/write handle/filename references
replaces = []
asm.each_line { |ln|
	if ln =~ /call /
		parts = ln.split(' ')
		if (parts[0] == 'call' and parts[2] == ';call')
			old = parts[1]
			func = parts[3]
			new = addrs[func]
			#puts '%32s: %s -> %x' % [func, old, new]
			replaces << [func, old, new.to_s(16)]
		end
	end
    }
    
    	def block_end
		# Insert the block size
		self.block[-1][0] = block[-1][0].ljust(SIZE1)
		self.block[-1][0] << '/*  '
		self.block[-1][0] << '#{block_size} bytes'
		self.block[-1][0] = block[-1][0].ljust(SIZE2)
		self.block[-1][0] << '  */'
    
        def definitions_for(klass)
      parent_classes = klass.ancestors.reverse
      parent_classes.each_with_object({}) do |ancestor, inherited_definitions|
        inherited_definitions.deep_merge! @attachments[ancestor]
      end
    end
  end
end
