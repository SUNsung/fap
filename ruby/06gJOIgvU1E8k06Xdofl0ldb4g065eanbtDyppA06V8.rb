
        
            keys.each do |key|
      value = env[key]
      s = '#{key}: #{value}'
      case key
      when 'CC', 'CXX', 'LD'
        s << ' => #{Pathname.new(value).realpath}' if File.symlink?(value)
      end
      f.puts s
    end
  end
end

    
      # True if a {Formula} is being built with a specific option
  # (which isn't named `with-*` or `without-*`).
  # @deprecated
  def include?(name)
    @args.include?('--#{name}')
  end
    
      def zsh_completion_caveats
    if keg && keg.completion_installed?(:zsh) then <<-EOS.undent
      zsh completion has been installed to:
        #{HOMEBREW_PREFIX}/share/zsh/site-functions
      EOS
    end
  end
    
        # Remove unresolved symlinks
    symlinks.reverse_each do |s|
      s.unlink unless s.resolved_path_exists?
    end
  end
    
    module Homebrew
  module Cleanup
    @@disk_cleanup_size = 0
    
        first_warning = true
    methods.each do |method|
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
      def filtered_list
    names = if ARGV.named.empty?
      Formula.racks
    else
      ARGV.named.map { |n| HOMEBREW_CELLAR+n }.select(&:exist?)
    end
    if ARGV.include? '--pinned'
      pinned_versions = {}
      names.each do |d|
        keg_pin = (HOMEBREW_LIBRARY/'PinnedKegs'/d.basename.to_s)
        if keg_pin.exist? || keg_pin.symlink?
          pinned_versions[d] = keg_pin.readlink.basename.to_s
        end
      end
      pinned_versions.each do |d, version|
        puts '#{d.basename}'.concat(ARGV.include?('--versions') ? ' #{version}' : '')
      end
    else # --versions without --pinned
      names.each do |d|
        versions = d.subdirs.map { |pn| pn.basename.to_s }
        next if ARGV.include?('--multiple') && versions.length < 2
        puts '#{d.basename} #{versions*' '}'
      end
    end
  end
end
    
        names = @@remote_tap_formulae['#{user}/#{repo}']
    user = user.downcase if user == 'Homebrew' # special handling for the Homebrew organization
    names.select { |name| rx === name }.map { |name| '#{user}/#{repo}/#{name}' }
  rescue GitHub::HTTPNotFoundError => e
    opoo 'Failed to search tap: #{user}/#{repo}. Please run `brew update`'
    []
  rescue GitHub::Error => e
    SEARCH_ERROR_QUEUE << e
    []
  end
    
      def std_cmake_parameters
    '-DCMAKE_INSTALL_PREFIX='#{prefix}' -DCMAKE_BUILD_TYPE=None -DCMAKE_FIND_FRAMEWORK=LAST -Wno-dev'
  end
    
    Then(/^the failure task will run$/) do
  failed = TestApp.shared_path.join('failed')
  run_vagrant_command(test_file_exists(failed))
end
    
        require 'capistrano/scm/git'
    install_plugin Capistrano::SCM::Git
    
          # Decorate Variables#set to add validation behavior.
      def set(key, value=nil, &block)
        assert_value_or_block_not_both(value, block)