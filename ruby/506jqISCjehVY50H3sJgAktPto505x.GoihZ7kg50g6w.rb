
        
          def fetch
    raise FormulaUnspecifiedError if ARGV.named.empty?
    
    require 'formula'
require 'tab'
require 'diagnostic'
    
        dirs.reverse_each do |d|
      if ARGV.dry_run? && d.children.empty?
        puts 'Would remove (empty directory): #{d}'
      else
        d.rmdir_if_possible
      end
    end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
    def config_tag(config, key, tag=nil, classname=nil)
  options     = key.split('.').map { |k| config[k] }.last #reference objects with dot notation
  tag       ||= 'div'
  classname ||= key.sub(/_/, '-').sub(/\./, '-')
  output      = '<#{tag} class='#{classname}''