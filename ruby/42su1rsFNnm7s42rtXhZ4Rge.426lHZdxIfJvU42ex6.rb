
        
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
    
    def build_configs(overrides, base_hash = Jekyll::Configuration::DEFAULTS)
  Jekyll::Utils.deep_merge_hashes(base_hash, overrides)
end
    
        # Gets/Sets the content of this layout.
    attr_accessor :content
    
        # Require all .rb files if safe mode is off
    #
    # Returns nothing.
    def require_plugin_files
      unless site.safe
        plugins_path.each do |plugin_search_path|
          plugin_files = Utils.safe_glob(plugin_search_path, File.join('**', '*.rb'))
          Jekyll::External.require_with_graceful_fail(plugin_files)
        end
      end
    end
    
        def layout_entries
      entries_in layout_directory
    end
    
        You can read more about this change at:
      https://www.playframework.com/documentation/2.3.x/Migration23
      https://www.playframework.com/documentation/2.3.x/Highlights23
    EOS
  when 'haskell-platform' then <<-EOS.undent
    We no longer package haskell-platform. Consider installing ghc
    and cabal-install instead:
      brew install ghc cabal-install
    
      def internal_commands
    find_internal_commands HOMEBREW_LIBRARY_PATH/'cmd'
  end
    
      def migrate_tap_migration
    report[:D].each do |full_name|
      name = full_name.split('/').last
      next unless (dir = HOMEBREW_CELLAR/name).exist? # skip if formula is not installed.
      next unless new_tap_name = tap.tap_migrations[name] # skip if formula is not in tap_migrations list.
      tabs = dir.subdirs.map { |d| Tab.for_keg(Keg.new(d)) }
      next unless tabs.first.tap == tap # skip if installed formula is not from this tap.
      new_tap = Tap.fetch(new_tap_name)
      new_tap.install unless new_tap.installed?
      # update tap for each Tab
      tabs.each { |tab| tab.tap = new_tap }
      tabs.each(&:write)
    end
  end
    
    test_check 'string & char'
    
    def to_boolean(proc)
  IF[proc][true][false]
end
    
    $pnum=[]
def setpiece(a,pos)
  if a.length == $p.length then
    $no += 1
    pboard
    return
  end
  while $b[pos] != -1
    pos += 1
  end
  ($pnum - a).each do |i|
    $p[i].each do |x|
      f = 0
      for s in x do
        if $b[pos+s] != -1
          f=1
          break
        end
      end
      if f == 0 then
        for s in x do
          $b[pos+s] = i
        end
        a << i
        setpiece(a.dup, pos)
        a.pop
        for s in x do
          $b[pos+s] = -1
        end
      end
    end
  end
end
    
      # PATCH/PUT /books/1
  # PATCH/PUT /books/1.json
  def update
    respond_to do |format|
      if @book.update(book_params)
        format.html { redirect_to @book, notice: 'Book was successfully updated.' }
        format.json { render :show, status: :ok, location: @book }
      else
        format.html { render :edit }
        format.json { render json: @book.errors, status: :unprocessable_entity }
      end
    end
  end
    
            def should_be_unused?
          name.to_s.start_with?('_')
        end
    
            def each_unnecessary_space_match(node, &blk)
          each_match_range(
            contents_range(node),
            MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX,
            &blk
          )
        end
      end
    end
  end
end

    
            def repeated_condition?(previous, condition)
          previous.any? { |c| c.include?(condition) }
        end
      end
    end
  end
end

    
            def_node_matcher :multiple_compare?, <<-PATTERN
          (send (send _ {:< :> :<= :>=} $_) {:< :> :<= :>=} _)
        PATTERN
    
            def argument_positions(arguments)
          optarg_positions = []
          arg_positions = []
    
    module RuboCop
  module Cop
    module Style
      # This cop check for uses of Object#freeze on immutable objects.
      #
      # @example
      #   # bad
      #   CONST = 1.freeze
      #
      #   # good
      #   CONST = 1
      class RedundantFreeze < Cop
        include FrozenStringLiteral