
        
        def bottle_resolve_formula_names(bottle_file)
  receipt_file_path = bottle_receipt_path bottle_file
  receipt_file = Utils.popen_read('tar', '-xOzf', bottle_file, receipt_file_path)
  name = receipt_file_path.split('/').first
  tap = Tab.from_file_content(receipt_file, '#{bottle_file}/#{receipt_file_path}').tap
    
          if f.plist_manual
        s << 'Or, if you don't want/need launchctl, you can just run:'
        s << '  #{f.plist_manual}'
      end
    
      def observe_file_removal(path)
    path.extend(ObserverPathnameExtension).unlink if path.exist?
  end
    
      def dump_verbose_config(f = $stdout)
    f.puts 'HOMEBREW_VERSION: #{HOMEBREW_VERSION}'
    f.puts 'ORIGIN: #{origin}'
    f.puts 'HEAD: #{head}'
    f.puts 'Last commit: #{last_commit}'
    if CoreTap.instance.installed?
      f.puts 'Core tap ORIGIN: #{core_tap_origin}'
      f.puts 'Core tap HEAD: #{core_tap_head}'
      f.puts 'Core tap last commit: #{core_tap_last_commit}'
    else
      f.puts 'Core tap: N/A'
    end
    f.puts 'HOMEBREW_PREFIX: #{HOMEBREW_PREFIX}'
    f.puts 'HOMEBREW_REPOSITORY: #{HOMEBREW_REPOSITORY}'
    f.puts 'HOMEBREW_CELLAR: #{HOMEBREW_CELLAR}'
    f.puts 'HOMEBREW_BOTTLE_DOMAIN: #{BottleSpecification::DEFAULT_DOMAIN}'
    f.puts hardware
    f.puts 'OS X: #{MacOS.full_version}-#{kernel}'
    f.puts 'Xcode: #{xcode ? xcode : 'N/A'}'
    f.puts 'CLT: #{clt ? clt : 'N/A'}'
    f.puts 'GCC-4.0: build #{gcc_40}' if gcc_40
    f.puts 'GCC-4.2: build #{gcc_42}' if gcc_42
    f.puts 'LLVM-GCC: build #{llvm}'  if llvm
    f.puts 'Clang: #{clang ? '#{clang} build #{clang_build}' : 'N/A'}'
    f.puts 'MacPorts/Fink: #{macports_or_fink}' if macports_or_fink
    f.puts 'X11: #{describe_x11}'
    f.puts 'System Ruby: #{describe_system_ruby}'
    f.puts 'Perl: #{describe_perl}'
    f.puts 'Python: #{describe_python}'
    f.puts 'Ruby: #{describe_ruby}'
    f.puts 'Java: #{describe_java}'
  end
end

    
    # This formula serves as the base class for several very similar
# formulae for Amazon Web Services related tools.
class AmazonWebServicesFormula < Formula
  # Use this method to peform a standard install for Java-based tools,
  # keeping the .jars out of HOMEBREW_PREFIX/lib
  def install
    rm Dir['bin/*.cmd'] # Remove Windows versions
    libexec.install Dir['*']
    bin.install_symlink Dir['#{libexec}/bin/*'] - ['#{libexec}/bin/service']
  end
  alias_method :standard_install, :install
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
        def get_web_content(url)
      raw_uri           = URI.parse url
      proxy             = ENV['http_proxy']
      if proxy
        proxy_uri       = URI.parse(proxy)
        https           = Net::HTTP::Proxy(proxy_uri.host, proxy_uri.port).new raw_uri.host, raw_uri.port
      else
        https           = Net::HTTP.new raw_uri.host, raw_uri.port
      end
      https.use_ssl     = true
      https.verify_mode = OpenSSL::SSL::VERIFY_NONE
      request           = Net::HTTP::Get.new raw_uri.request_uri
      data              = https.request request
    end
  end
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
    module Jekyll
    
            def on_send(node)
          return unless match_call?(node) &&
                        (!node.value_used? || only_truthiness_matters?(node)) &&
                        !(node.parent && node.parent.block_type?)
    
    RSpec.describe RuboCop::Cop::Style::StringMethods, :config do
  subject(:cop) { described_class.new(config) }