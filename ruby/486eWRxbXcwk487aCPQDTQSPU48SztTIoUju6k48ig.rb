
        
        def bottle_resolve_formula_names(bottle_file)
  receipt_file_path = bottle_receipt_path bottle_file
  receipt_file = Utils.popen_read('tar', '-xOzf', bottle_file, receipt_file_path)
  name = receipt_file_path.split('/').first
  tap = Tab.from_file_content(receipt_file, '#{bottle_file}/#{receipt_file_path}').tap
    
      def describe_perl
    describe_path(which 'perl')
  end
    
        checks.inject_dump_stats! if ARGV.switch? 'D'
    
        dirs.each do |d|
      files = []
      d.find { |pn| files << pn unless pn.directory? }
      print_remaining_files files, d
    end
    
      private
    
          _form_configurable_fields[name] = options
    end
    
      def retry_queued
    @jobs = Delayed::Job.awaiting_retry.update_all(run_at: Time.zone.now)
    
    respond_to do |format|
      format.html { redirect_to jobs_path, notice: 'Queued jobs getting retried.' }
      format.json { head :no_content }
    end
  end
    
        respond_to do |format|
      format.html
      format.json {
        send_data Utils.pretty_jsonify(@user_credentials.limit(nil).as_json), disposition: 'attachment'
      }
    end
  end
    
            # Fires all the registered callbacks.
        def fire_callbacks
          registered.reverse.each { |r| r.call }
        end
    
              # Parse the options
          argv = parse_options(opts)
          return if !argv
          if argv.empty? || argv.length > 2
            raise Vagrant::Errors::CLIInvalidUsage,
              help: opts.help.chomp
          end
    
    module VagrantPlugins
  module CommandBox
    module Command
      class Repackage < Vagrant.plugin('2', :command)
        def execute
          opts = OptionParser.new do |o|
            o.banner = 'Usage: vagrant box repackage <name> <provider> <version>'
          end
    
      validate :enough_poll_answers
  validates :question, presence: true
    
    public_dir      = 'public'    # compiled site directory
source_dir      = 'source'    # source file directory
blog_index_dir  = 'source'    # directory for your blog's index page (if you put your index in source/blog/index.html, set this to 'source/blog')
deploy_dir      = '_deploy'   # deploy directory (for Github pages deployment)
stash_dir       = '_stash'    # directory to stash posts for speedy generation
posts_dir       = '_posts'    # directory for blog files
themes_dir      = '.themes'   # directory for blog files
new_post_ext    = 'markdown'  # default new post file extension when using the new_post task
new_page_ext    = 'markdown'  # default new page file extension when using the new_page task
server_port     = '4000'      # port for preview server eg. localhost:4000
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
      # Do not eager load code on boot.
  config.eager_load = false