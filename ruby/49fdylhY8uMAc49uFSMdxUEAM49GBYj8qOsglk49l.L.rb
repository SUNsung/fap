
        
        def pboard
  return # skip print
  print 'No. #$no\n'
  (0...COL).each{|i|
    print '|'
    (0...ROW-NP).each{|j|
      x = $b[i*ROW+j]
      if x < 0
        print '..|'
      else
        printf '%2d|',x+1
      end
    }
    print '\n'
  }
  print '\n'
end
    
    (allow file-read-metadata)
(allow file-read*
  ; This is currenly only added because using `xcodebuild` to build a resource
  ; bundle target starts a FSEvents stream on `/`. No idea why that would be
  ; needed, but for now it doesn’t seem like a real problem.
  (literal '/')
  (regex
    ; TODO see if we can restrict this more, but it's going to be hard
    #'^/Users/[^.]+/*'
    ;#'^/Users/[^.]+/.netrc'
    ;#'^/Users/[^.]+/.gemrc'
    ;#'^/Users/[^.]+/.gem/*'
    ;#'^/Users/[^.]+/Library/.*'
    #'^/Library/*'
    #'^/System/Library/*'
    #'^/usr/lib/*'
    #'^/usr/share/*'
    #'^/private/*'
    #'^/dev/*'
    #'^<%= ruby_prefix %>'
    #'^<%= pod_prefix %>'
    #'^<%= xcode_app_path %>'
    #'^<%= Pod::Config.instance.repos_dir %>'
<% prefixes.each do |prefix| %>
    #'^<%= prefix %>/*'
<% end %>
  )
)
    
    abstract_target 'Abstract Target' do
    use_modular_headers!
    
          def report
        <<-EOS
    
          # Custom destructuring method. This can be used to normalize
      # destructuring for different variations of the node.
      #
      # In this case, the `def` node destructures into:
      #
      #   `method_name, arguments, body`
      #
      # while the `defs` node destructures into:
      #
      #   `receiver, method_name, arguments, body`
      #
      # so we reverse the destructured array to get the optional receiver
      # at the end, where it can be discarded.
      #
      # @return [Array] the different parts of the `def` or `defs` node
      def node_parts
        to_a.reverse
      end
    end
  end
end

    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode
    
          # Returns the index of the `when` branch within the `case` statement.
      #
      # @return [Integer] the index of the `when` branch
      def branch_index
        parent.when_branches.index(self)
      end
    
        # Evaluate dependencies.
    if !attributes[:no_auto_depends?]
	    pkgdepend_gen = safesystemout('pkgdepend', 'generate',  '-md', '#{staging_path}',  manifest_fn)
      File.write(build_path('#{name}.p5m.3'), pkgdepend_gen)
    
        if attributes[:pear_data_dir]
      logger.info('Setting data_dir', :data_dir => attributes[:pear_data_dir])
      safesystem('pear', '-c', config, 'config-set', 'data_dir', '#{staging_path(installroot)}/#{attributes[:pear_data_dir]}')
    end
    
        File.write(build_path('comment'),  self.description + '\n')
    
        if File.exists?(params[:output])
      # TODO(sissel): Allow folks to choose output?
      logger.error('Puppet module directory '#{params[:output]}' already ' \
                    'exists. Delete it or choose another output (-p flag)')
    end
    
        begin
      json_test_code = [
        'try:',
        '  import json',
        'except ImportError:',
        '  import simplejson as json'
      ].join('\n')
      safesystem('#{attributes[:python_bin]} -c '#{json_test_code}'')
    rescue FPM::Util::ProcessFailed => e
      logger.error('Your python environment is missing json support (either json or simplejson python module). I cannot continue without this.', :python => attributes[:python_bin], :error => e)
      raise FPM::Util::ProcessFailed, 'Python (#{attributes[:python_bin]}) is missing simplejson or json modules.'
    end