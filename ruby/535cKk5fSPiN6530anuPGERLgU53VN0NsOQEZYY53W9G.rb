
        
        def bottle_receipt_path(bottle_file)
  Utils.popen_read('/usr/bin/tar', '-tzf', bottle_file, '*/*/INSTALL_RECEIPT.json').chomp
end
    
      def std?
    @settings.include? :std
  end
    
      # Clean a top-level (bin, sbin, lib) directory, recursively, by fixing file
  # permissions and removing .la files, unless the files (or parent
  # directories) are protected by skip_clean.
  #
  # bin and sbin should not have any subdirectories; if either do that is
  # caught as an audit warning
  #
  # lib may have a large directory tree (see Erlang for instance), and
  # clean_dir applies cleaning rules to the entire tree
  def clean_dir(d)
    d.find do |path|
      path.extend(ObserverPathnameExtension)
    
      def external_commands
    paths.reduce([]) do |cmds, path|
      Dir['#{path}/brew-*'].each do |file|
        next unless File.executable?(file)
        cmd = File.basename(file, '.rb')[5..-1]
        cmds << cmd unless cmd.include?('.')
      end
      cmds
    end.sort
  end
    
          out = checks.send(method)
      unless out.nil? || out.empty?
        if first_warning
          $stderr.puts <<-EOS.undent
            #{Tty.white}Please note that these warnings are just used to help the Homebrew maintainers
            with debugging if you file an issue. If everything you use Homebrew for is
            working fine: please don't worry and just ignore them. Thanks!#{Tty.reset}
          EOS
        end
    
    require 'formula_versions'
require 'migrator'
require 'formulary'
require 'descriptions'
    
      private
    
        def matching_username
      Account.where(Account.arel_table[:username].lower.eq username.to_s.downcase)
    end
    
      attributes :id, :type, :url, :preview_url,
             :remote_url, :text_url, :meta,
             :description
    
    class ActivityPub::EmojiSerializer < ActiveModel::Serializer
  include RoutingHelper
    
      def scope
    root_url
  end
    
    def process_args
  until ARGV.empty?
    if ARGV.first =~ %r{^-+t(?:est)?$} && ARGV.length > 1
      ARGV.shift
      $opt_test = ARGV.shift
    elsif ARGV.first =~ %r{^-+h(?:elp)?$}
      puts usage
      exit 0
    else
      puts usage
      exit 1
    end
  end
end
    
            def index
          authorize! :read, StockMovement
          @stock_movements = scope.ransack(params[:q]).result.page(params[:page]).per(params[:per_page])
          respond_with(@stock_movements)
        end