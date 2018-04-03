
        
          </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
    # You can also do other things. Examples:
# https://github.com/tmm1/stackprof/blob/master/bin/stackprof
report = StackProf::Report.new(Marshal.load(IO.binread(PROF_OUTPUT_FILE)))
report.print_text(
  options[:sort],
  options[:limit],
  options[:select_files],
  options[:reject_files],
  options[:select_names],
  options[:reject_names]
)
    
    # Create an array of vendored mimetype => [extensions]
mimes = {}
json = open('https://raw.githubusercontent.com/jshttp/mime-db/master/db.json').read
data = JSON.parse(json)
data.reject! { |mime, meta| meta['extensions'].nil? || meta['extensions'].empty? }
data.each do |mime, meta|
  # Normalize extensions and mime-types
  mime = mime.downcase.strip
  extensions = meta['extensions'].map { |e| e.downcase.strip }.compact
    
        # --
    # Check if an entry matches a specific pattern and return true,false.
    # Returns true if path matches against any glob pattern.
    # --
    def glob_include?(enum, e)
      entry = Pathutil.new(site.in_source_dir).join(e)
      enum.any? do |exp|
        # Users who send a Regexp knows what they want to
        # exclude, so let them send a Regexp to exclude files,
        # we will not bother caring if it works or not, it's
        # on them at this point.
    
          if site.theme && site.theme.layouts_path.eql?(base)
        @base_dir = site.theme.root
        @path = site.in_theme_dir(base, name)
      else
        @base_dir = site.source
        @path = site.in_source_dir(base, name)
      end
      @relative_path = @path.sub(@base_dir, '')
    
          private
    
          def update_if_necessary!
        if @update && config.verbose?
          UI.section('\nUpdating Spec Repositories\n'.yellow) do
            Repo.new(ARGV.new(['update'])).run
          end
        end
      end
    
        # @abstract
    #
    # Copy the contents of the cache-repository onto the release path
    #
    # @return void
    #
    def release
      raise NotImplementedError, 'Your SCM strategy module should provide a #release method'
    end
    
          it { expect(subject).to be_truthy }
    end