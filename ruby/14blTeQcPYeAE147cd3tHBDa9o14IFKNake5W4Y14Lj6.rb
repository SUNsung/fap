
        
              https://pip.readthedocs.org/en/stable/installing/#install-pip
    EOS
  when 'pil' then <<-EOS.undent
    Instead of PIL, consider `pip install pillow` or `brew install Homebrew/python/pillow`.
    EOS
  when 'macruby' then <<-EOS.undent
    MacRuby works better when you install their package:
      http://www.macruby.org/
    EOS
  when /(lib)?lzma/
    'lzma is now part of the xz formula.'
  when 'xcode'
    if MacOS.version >= :lion
      <<-EOS.undent
      Xcode can be installed from the App Store.
      EOS
    else
      <<-EOS.undent
      Xcode can be installed from https://developer.apple.com/xcode/downloads/
      EOS
    end
  when 'gtest', 'googletest', 'google-test' then <<-EOS.undent
    Installing gtest system-wide is not recommended; it should be vendored
    in your projects that use it.
    EOS
  when 'gmock', 'googlemock', 'google-mock' then <<-EOS.undent
    Installing gmock system-wide is not recommended; it should be vendored
    in your projects that use it.
    EOS
  when 'sshpass' then <<-EOS.undent
    We won't add sshpass because it makes it too easy for novice SSH users to
    ruin SSH's security.
    EOS
  when 'gsutil' then <<-EOS.undent
    Install gsutil with `pip install gsutil`
    EOS
  when 'clojure' then <<-EOS.undent
    Clojure isn't really a program but a library managed as part of a
    project and Leiningen is the user interface to that library.
    
    module Homebrew
  def config
    dump_verbose_config
  end
    
        first_warning = true
    methods.each do |method|
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
    module Jobs
    
    require_relative '../mastodon/snowflake'
    
      def url
    if object.needs_redownload?
      media_proxy_url(object.id, :original)
    else
      full_asset_url(object.file.url(:original))
    end
  end
    
      if defined? config.symbolize_keys!
    config.symbolize_keys!
  end
    
          if File.directory?(source_entry)
        FileUtils.mkdir(target_entry) unless File.exists?(target_entry)
        transform_r(source_entry, target_entry)
      else
        # copy the new file, in case of being an .erb file should render first
        if source_entry.end_with?('erb')
          target_entry = target_entry.gsub(/.erb$/,'').gsub('example', name)
          File.open(target_entry, 'w') { |f| f.write(render(source_entry)) }
        else
          FileUtils.cp(source_entry, target_entry)
        end
        puts '\t create #{File.join(full_plugin_name, Pathname.new(target_entry).relative_path_from(Pathname.new(@target_path)))}'
      end
    end
  end