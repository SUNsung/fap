
        
              * Redistributions of source code must retain the above copyright
        notice, this list of conditions and the following disclaimer.
      * Redistributions in binary form must reproduce the above
        copyright notice, this list of conditions and the following
        disclaimer in the documentation and/or other materials provided
        with the distribution.
      * Neither the name of Google Inc. nor the names of its
        contributors may be used to endorse or promote products derived
        from this software without specific prior written permission.
    
          def format
        @format = (@page.format || false) if @format.nil? && @page
        @format.to_s.downcase
      end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift int, shift
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
          # Finds header node inside Nokogiri::HTML document.
      #
      def find_header_node(doc)
        case @page.format
          when :asciidoc
            doc.css('div#gollum-root > h1:first-child')
          when :org
            doc.css('div#gollum-root > p.title:first-child')
          when :pod
            doc.css('div#gollum-root > a.dummyTopAnchor:first-child + h1')
          when :rest
            doc.css('div#gollum-root > div > div > h1:first-child')
          else
            doc.css('div#gollum-root > h1:first-child')
        end
      end
    
    # Silence locale validation warning
require 'i18n'
I18n.enforce_available_locales = false
    
    # Read command line options into `options` hash
begin
  opts.parse!
rescue OptionParser::InvalidOption
  puts 'gollum: #{$!.message}'
  puts 'gollum: try 'gollum --help' for more information'
  exit
end
    
        # Query details about our now-installed package.
    # We do this by using 'npm ls' with json + long enabled to query details
    # about the installed package.
    npm_ls_out = safesystemout(attributes[:npm_bin], 'ls', '--json', '--long', *npm_flags)
    npm_ls = JSON.parse(npm_ls_out)
    name, info = npm_ls['dependencies'].first
    
        ::Dir.mkdir(File.join(builddir, 'manifests'))
    manifests.each do |manifest|
      dir = File.join(builddir, 'manifests', File.dirname(manifest))
      logger.info('manifests targeting: #{dir}')
      ::Dir.mkdir(dir) if !File.directory?(dir)
    
      def create_scripts
    if script?(:after_install)
      File.write(File.join(fpm_meta_path, 'after_install'), script(:after_install))
    end
  end
    
        File.utime(source_stat.atime, source_stat.mtime, destination)
    mode = source_stat.mode
    begin
      File.lchown(source_stat.uid, source_stat.gid, destination)
    rescue Errno::EPERM
      # clear setuid/setgid
      mode &= 01777
    end
    
        desc 'version', 'Show Bourbon version'
    def version
      say 'Bourbon #{Bourbon::VERSION}'
    end
    
      context 'called with arguments (1, $ratio: $golden-ratio)' do
    it 'output the first value from the golden ratio scale' do
      expect('.one-golden-ratio').to have_rule('font-size: 1.618em')
    end
  end
    
      context 'called with one size' do
    it 'applies same width to both height and width' do
      rule = 'height: 10px; width: 10px;'