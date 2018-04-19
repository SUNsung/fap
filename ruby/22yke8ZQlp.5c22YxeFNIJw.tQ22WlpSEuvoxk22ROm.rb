
        
        class Devise::PasswordsController < DeviseController
  prepend_before_action :require_no_authentication
  # Render the #edit only if coming from a reset password email link
  append_before_action :assert_reset_token_passed, only: :edit
    
              @registered.each do |plugin|
            result += plugin.components.action_hooks[Plugin::ALL_ACTIONS]
            result += plugin.components.action_hooks[hook_name]
          end
    
            # Get the proper capability host to check
        cap_host = nil
        if type == :host
          cap_host = @env.host
        else
          with_target_vms([]) do |vm|
            cap_host = case type
                       when :provider
                         vm.provider
                       when :guest
                         vm.guest
                       else
                         raise Vagrant::Errors::CLIInvalidUsage,
                           help: opts.help.chomp
                       end
          end
        end
    
    lib_path = root.join('lib').to_path
    
        res << inp.to_html
  end
  res << '</form>'
end
    
      def parse(pkt)
    # We want to return immediatly if we do not have a packet which is handled by us
    return unless pkt.is_tcp?
    return if (pkt.tcp_sport != 110 and pkt.tcp_dport != 110)
    s = find_session((pkt.tcp_sport == 110) ? get_session_src(pkt) : get_session_dst(pkt))
    
    
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
    
      def parse
    @result = ERB.new(@template).result(binding)
  end
    
          it 'identifies that Intel and PowerPC machines can't run each others' executables' do
        allow(Hardware::CPU).to receive(:type).and_return :ppc
        expect(Hardware::CPU.can_run?(:i386)).to be false
        expect(Hardware::CPU.can_run?(:x86_64)).to be false
    
      # Display a list of things.
  # Things may either be an array, or a hash of (label -> array)
  def display_items(label, things)
    return if things.empty?
    puts '#{label}:'
    if things.is_a? Hash
      things.keys.sort.each do |list_label|
        things[list_label].sort.each do |item|
          puts '  #{item} (#{list_label})'
        end
      end
    else
      things.sort.each do |item|
        puts '  #{item}'
      end
    end
  end
    
      def load_logs(dir)
    logs = {}
    if dir.exist?
      dir.children.sort.each do |file|
        contents = file.size? ? file.read : 'empty log'
        # small enough to avoid GitHub 'unicorn' page-load-timeout errors
        max_file_size = 1_000_000
        contents = truncate_text_to_approximate_size(contents, max_file_size, front_weight: 0.2)
        logs[file.basename.to_s] = { content: contents }
      end
    end
    raise 'No logs.' if logs.empty?
    logs
  end
    
            attr_reader :name, :declaration_node, :scope,
                    :assignments, :references, :captured_by_block
        alias captured_by_block? captured_by_block
    
      let(:source) { ''something'.intern' }
  let(:corrected) { autocorrect_source(source) }